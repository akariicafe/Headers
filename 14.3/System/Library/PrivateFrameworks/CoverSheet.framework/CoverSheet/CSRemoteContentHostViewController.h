@class SBSRemoteContentDefinition, SBSRemoteContentPreferences;
@protocol CSRemoteContentHostDelegate;

@interface CSRemoteContentHostViewController : _UIRemoteViewController <SBSRemoteContentHostInterface> {
    SBSRemoteContentPreferences *_contentPreferences;
}

@property (retain, nonatomic) SBSRemoteContentDefinition *definition;
@property (weak, nonatomic) id<CSRemoteContentHostDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didChangeStyle;
- (void)getContentBoundsWithReplyBlock:(id /* block */)a0;
- (void)didDismissForDismissType:(long long)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)configureWithDefinition:(id)a0;
- (id)contentPreferences;
- (void)_fetchContentPreferences;
- (void)_updateContentPreferences:(id)a0;

@end
