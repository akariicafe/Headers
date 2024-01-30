@class NSMutableArray, MNGuidanceEventManager, GEOComposedGuidanceEvent;

@interface MNAnnouncementPlanEvent : NSObject

@property (weak, nonatomic) MNGuidanceEventManager *manager;
@property (retain, nonatomic) GEOComposedGuidanceEvent *event;
@property (nonatomic) double distance;
@property (nonatomic) double speed;
@property (retain, nonatomic) NSMutableArray *announcementDurations;
@property (nonatomic) BOOL includeInPlan;
@property (nonatomic) unsigned long long variantIndex;
@property (nonatomic) double triggerDistance;
@property (readonly, nonatomic) double completionDistance;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEvent:(id)a0 distance:(double)a1 speed:(double)a2 manager:(id)a3;

@end
