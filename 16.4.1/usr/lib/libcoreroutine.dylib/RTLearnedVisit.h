@class NSString, NSUUID, RTLearnedLocation, NSDate;

@interface RTLearnedVisit : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double placeConfidence;
@property (nonatomic) unsigned long long placeSource;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) RTLearnedLocation *location;
@property (readonly, nonatomic) NSDate *entryDate;
@property (readonly, nonatomic) NSDate *exitDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;

+ (id)createWithLearnedVisitMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;
+ (id)createWithLearnedLocationOfInterestVisitMO:(id)a0;

- (id)managedObjectWithContext:(id)a0;
- (double)duration;
- (void)updateManagedObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 location:(id)a1 entryDate:(id)a2 exitDate:(id)a3 creationDate:(id)a4 expirationDate:(id)a5;
- (id)initWithIdentifier:(id)a0 location:(id)a1 entryDate:(id)a2 exitDate:(id)a3 creationDate:(id)a4 expirationDate:(id)a5 placeConfidence:(double)a6 placeSource:(unsigned long long)a7;
- (void).cxx_destruct;
- (id)initWithVisit:(id)a0 locationOfInterest:(id)a1 creationDate:(id)a2 expirationDate:(id)a3;

@end
