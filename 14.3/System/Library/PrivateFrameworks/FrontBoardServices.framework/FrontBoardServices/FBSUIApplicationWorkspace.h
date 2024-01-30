@protocol FBSUIApplicationWorkspaceDelegate;

@interface FBSUIApplicationWorkspace : FBSWorkspace

@property (readonly, nonatomic) id<FBSUIApplicationWorkspaceDelegate> delegate;

- (id)initWithSerialQueue:(id)a0;
- (void)setDelegate:(id)a0;

@end
