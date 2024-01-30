@class SBSRemoteContentDefinition, SBSRemoteContentPreferences;
@protocol CSRemoteContentHostDelegate;

@interface CSRemoteContentHostViewController : _UIRemoteViewController <SBSRemoteContentHostInterface>

@property (retain, nonatomic) SBSRemoteContentDefinition *definition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (retain, nonatomic) SBSRemoteContentPreferences *contentPreferences;
@property (weak, nonatomic) id<CSRemoteContentHostDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } safeAreaForRemote;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)getContentBoundsWithReplyBlock:(id /* block */)a0;
- (void)didChangeStyle;
- (void)didDismissForDismissType:(long long)a0;
- (void)presentAlert:(id)a0 replyBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_customContentBounds;
- (void)_fetchContentPreferences;
- (void)_fetchInlinePresentationContentFrame;
- (void)_updateContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentPreferences:(id)a0;
- (void)configureWithDefinition:(id)a0;
- (void)hostDidChangeContentBounds;

@end
