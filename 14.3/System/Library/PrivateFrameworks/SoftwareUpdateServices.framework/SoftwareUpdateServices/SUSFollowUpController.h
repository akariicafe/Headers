@class NSString, FLFollowUpController;

@interface SUSFollowUpController : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSString *identifier;

+ (id)sharedController;

- (id)init;
- (void)SUSFollowUpControllerUnbadgeSettings;
- (void)SUSFollowUpControllerBadgeSettings;
- (void)dealloc;
- (void)dismissAutoUpdateFollowUp;
- (void)dismissFollowUp;
- (BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
- (BOOL)isFollowUpCurrentlyBeingPresented;
- (void)postFollowUp:(id)a0;
- (BOOL)isAutoUpdateFollowUpCurrentlyBeingPresented;
- (void)dismissBadgeOnlyFollowUp;
- (id)getCurrentSUSFollowUpItem;

@end
