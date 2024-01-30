@class NSString, NSArray;

@interface _GEOTransitNearbyScheduleCategory : NSObject <GEOTransitNearbyScheduleCategory>

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTransitScheduleCategory:(id)a0 nearbyScheduleGroups:(id)a1;

@end
