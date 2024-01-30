@class BrowserController, TabDocument, NSTimer;

@interface UserActivityController : NSObject {
    NSTimer *_tabCreationDelayTimer;
}

@property (readonly, weak, nonatomic) BrowserController *browserController;
@property (weak, nonatomic) TabDocument *tabDocumentPendingUserActivityPayload;

- (id)initWithBrowserController:(id)a0;
- (void)_invalidateTabCreationDelayTimer;
- (BOOL)continueUserActivity:(id)a0;
- (void)_prepareTabDocumentForNewUserActivityWithDelay:(double)a0;
- (void)didFailToContinueUserActivityWithType:(id)a0 error:(id)a1;
- (id)_tabDocumentWithURL:(id)a0;
- (void)_prepareTabDocumentForNewUserActivity;
- (void).cxx_destruct;
- (BOOL)willContinueUserActivityWithType:(id)a0;

@end
