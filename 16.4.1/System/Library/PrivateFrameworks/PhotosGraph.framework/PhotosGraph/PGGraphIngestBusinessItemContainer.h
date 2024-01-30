@class CLSBusinessItem, NSString, NSDateInterval, NSArray, CLCircularRegion, CLSLocationOfInterestVisit;

@interface PGGraphIngestBusinessItemContainer : NSObject <PGGraphIngestBusiness>

@property (readonly, nonatomic) CLSBusinessItem *businessItem;
@property (readonly, nonatomic) CLSLocationOfInterestVisit *visit;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *businessCategories;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) long long venueCapacity;
@property (readonly, nonatomic) double routineVisitConfidence;
@property (readonly, nonatomic) BOOL hasRoutineVisit;
@property (readonly, nonatomic) CLCircularRegion *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBusinessItem:(id)a0 dateInterval:(id)a1;
- (id)initWithBusinessItem:(id)a0 visit:(id)a1;
- (id)initWithBusinessItem:(id)a0 visit:(id)a1 dateInterval:(id)a2;
- (void)updateBusinessItem:(id)a0;

@end
