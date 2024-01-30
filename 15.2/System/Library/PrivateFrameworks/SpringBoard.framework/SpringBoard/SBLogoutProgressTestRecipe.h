@class NSArray, NSDictionary, SBLogoutProgressTransientOverlayViewController, NSString, NSMutableArray;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe> {
    NSMutableArray *_tasks;
}

@property (retain, nonatomic) SBLogoutProgressTransientOverlayViewController *logoutProgressTransientOverlayViewController;
@property (copy, nonatomic) NSArray *remainingApplications;
@property (retain, nonatomic) NSDictionary *remainingBlockingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)a0;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_defaultPendingApplications;
- (id)_defaultBlockingTasks;

@end
