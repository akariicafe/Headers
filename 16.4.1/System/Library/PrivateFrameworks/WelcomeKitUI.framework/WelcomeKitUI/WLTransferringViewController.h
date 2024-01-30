@class WLWelcomeController, NSString, NSObject, NSDateComponentsFormatter;
@protocol OS_dispatch_source;

@interface WLTransferringViewController : WLOnboardingProgressViewController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
    NSDateComponentsFormatter *_remainingDownloadTimeFormatter;
    double _remainingDownloadTime;
    NSObject<OS_dispatch_source> *_remainingDownloadTimeUpdateTimer;
}

@property (copy, nonatomic) NSString *progressDescription;
@property (nonatomic) BOOL showCancelButton;
@property (copy, nonatomic) id /* block */ cancellationBlock;
@property (copy, nonatomic) id /* block */ viewWillDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setProgressText:(id)a0;
- (void)_cancelRemainingDownloadTimeUpdateTimer;
- (void)importDidStart;
- (id)initWithSourceDevice:(id)a0 welcomeController:(id)a1;
- (void)setRemainingDownloadTime:(double)a0;
- (void)showActivityIndicatorView;

@end
