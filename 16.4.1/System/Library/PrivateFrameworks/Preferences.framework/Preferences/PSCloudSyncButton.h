@class PSViewController, NSString, NSDictionary, NSError;
@protocol PSCloudSyncDelegate;

@interface PSCloudSyncButton : UIBarButtonItem <PSCloudSyncPopoverDelegate>

@property (retain, nonatomic) NSDictionary *options;
@property (weak, nonatomic) id<PSCloudSyncDelegate> delegate;
@property (nonatomic) BOOL syncEnabled;
@property (retain, nonatomic) NSError *syncError;
@property (readonly, weak, nonatomic) PSViewController *controller;
@property (readonly, copy, nonatomic) NSString *syncTitle;
@property (readonly, nonatomic) NSString *syncMessage;
@property (nonatomic, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;

- (void)update;
- (void).cxx_destruct;
- (void)cloudSyncAction:(id)a0;
- (BOOL)hasMergeConflict;
- (id)initWithController:(id)a0 options:(id)a1 delegate:(id)a2;
- (id)mergeConflictMessage;
- (BOOL)showRedirectSheet;
- (void)updateIcon;

@end
