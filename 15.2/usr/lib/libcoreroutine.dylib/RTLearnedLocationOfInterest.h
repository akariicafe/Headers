@class NSString, NSUUID, NSArray, RTLearnedLocation, RTLearnedPlace;

@interface RTLearnedLocationOfInterest : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) RTLearnedLocation *location;
@property (readonly, nonatomic) RTLearnedPlace *place;
@property (readonly, nonatomic) NSArray *visits;
@property (readonly, nonatomic) NSArray *transitions;

+ (unsigned long long)mapItemSourceFromGeoMapItemSource:(unsigned long long)a0;
+ (id)createWithLearnedLocationOfInterestMO:(id)a0;
+ (id)createWithLearnedLocationOfInterestVisitMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;

- (void)updateManagedObject:(id)a0;
- (id)initWithLocationOfInterest:(id)a0 creationDate:(id)a1;
- (id)filterWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 location:(id)a1 place:(id)a2 visits:(id)a3 transitions:(id)a4;
- (id)managedObjectWithContext:(id)a0;

@end
