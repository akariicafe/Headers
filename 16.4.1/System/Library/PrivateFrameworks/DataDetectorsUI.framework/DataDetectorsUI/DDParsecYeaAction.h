@interface DDParsecYeaAction : DDParsecAction

- (id)feedbackListener;
- (id)localizedName;
- (void)report;
- (BOOL)hasUserInterface;
- (id)createViewController;
- (void)performFromView:(id)a0;
- (void)prepareViewControllerForActionController:(id)a0;
- (unsigned long long)relevancy;

@end
