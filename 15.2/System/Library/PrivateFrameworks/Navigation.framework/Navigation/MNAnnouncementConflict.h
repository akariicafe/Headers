@class MNAnnouncementPlanEvent;

@interface MNAnnouncementConflict : NSObject

@property (retain, nonatomic) MNAnnouncementPlanEvent *firstEvent;
@property (retain, nonatomic) MNAnnouncementPlanEvent *secondEvent;
@property (nonatomic) double timeGap;
@property (nonatomic) double desiredTimeGap;
@property (nonatomic) BOOL announcementsAreSimilar;

- (id)description;
- (void).cxx_destruct;

@end
