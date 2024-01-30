@interface DDParsecYeaAction : DDParsecAction

- (id)localizedName;
- (id)feedbackListener;
- (BOOL)hasUserInterface;
- (void)report;
- (unsigned long long)relevancy;
- (id)createViewController;
- (void)performFromView:(id)a0;
- (void)prepareViewControllerForActionController:(id)a0;

@end
