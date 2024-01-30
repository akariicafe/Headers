@class NSString, CAMSemanticStyleSettingsView;

@interface CAMSemanticStyleSettingsRootController : UIViewController <CAMSemanticStyleSettingsViewDelegate>

@property (readonly, nonatomic) CAMSemanticStyleSettingsView *_settingsView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (void)_dismiss;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)settingsViewDidDismiss:(id)a0;

@end
