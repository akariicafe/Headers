@protocol PSCloudSyncPopoverDelegate;

@interface PSCloudSyncController : PSListController

@property (weak, nonatomic) id<PSCloudSyncPopoverDelegate> delegate;

- (id)cloudSyncEnabled;
- (id)initWithDelegate:(id)a0;
- (id)specifiers;
- (void)setCloudSyncEnabled:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
