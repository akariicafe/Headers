@interface DDParsecYeaAction : DDParsecAction

- (void)report;
- (BOOL)hasUserInterface;
- (id)localizedName;
- (unsigned long long)relevancy;
- (id)feedbackListener;
- (id)createViewController;
- (void)performFromView:(id)a0;
- (void)prepareViewControllerForActionController:(id)a0;

@end
