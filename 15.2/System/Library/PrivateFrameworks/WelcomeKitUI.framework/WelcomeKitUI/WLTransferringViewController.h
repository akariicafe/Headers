@class WLWelcomeController, NSString, NSObject, NSDateComponentsFormatter;
@protocol OS_dispatch_source;

@interface WLTransferringViewController : WLOnboardingProgressViewController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
    NSDateComponentsFormatter *_remainingDownloadTimeFormatter;
    double _remainingDownloadTime;
    NSObject<OS_dispatch_source> *_remainingDownloadTimeUpdateTimer;
}

@property (nonatomic) BOOL showCancelButton;
@property (copy, nonatomic) id /* block */ viewWillDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setProgressText:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithSourceDevice:(id)a0 welcomeController:(id)a1;
- (void)_cancelRemainingDownloadTimeUpdateTimer;
- (void)setRemainingDownloadTime:(double)a0;
- (void)importDidStart;

@end
