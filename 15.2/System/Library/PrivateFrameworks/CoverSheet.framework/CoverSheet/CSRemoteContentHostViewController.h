@class SBSRemoteContentDefinition, SBSRemoteContentPreferences;
@protocol CSRemoteContentHostDelegate;

@interface CSRemoteContentHostViewController : _UIRemoteViewController <SBSRemoteContentHostInterface> {
    SBSRemoteContentPreferences *_contentPreferences;
}

@property (retain, nonatomic) SBSRemoteContentDefinition *definition;
@property (weak, nonatomic) id<CSRemoteContentHostDelegate> delegate;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)didChangeStyle;
- (void)getContentBoundsWithReplyBlock:(id /* block */)a0;
- (void)didDismissForDismissType:(long long)a0;
- (void)configureWithDefinition:(id)a0;
- (id)contentPreferences;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_customContentBounds;
- (void)_fetchContentPreferences;
- (void)_updateContentPreferences:(id)a0;

@end
