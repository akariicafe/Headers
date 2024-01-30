@class NSString, PKUserNotificationAuthorizationController;
@protocol PKPassLibraryDataProvider;

@interface PKUserNotificationAuthorizationExplanationViewController : PKExplanationViewController {
    PKUserNotificationAuthorizationController *_controller;
    id<PKPassLibraryDataProvider> _dataProvider;
    unsigned long long _contentTypeToDisplay;
    BOOL _didBeginWalletSettingsSubject;
    NSString *_referralSource;
    NSString *_productType;
}

@property (copy, nonatomic) id /* block */ nextStepHandler;
@property (readonly, nonatomic) BOOL isPresentingNotificationAuthorizationPrompt;

- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_beginReportingIfNecessary;
- (id)_analyticsPartialEventDictionaryWithButtonTag:(id)a0 pageTag:(id)a1;
- (void)_endReportingIfNecessary;
- (void)_reportContinueButtonTapped;
- (void)_reportNotNowButtonTapped;
- (void)_reportNotificationAuthorizationButtonTapped:(BOOL)a0;
- (void)_reportNotificationPromptDidAppear;
- (void)_reportViewDidAppear;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithController:(id)a0 contentType:(unsigned long long)a1 context:(long long)a2 dataProvider:(id)a3;
- (id)initWithController:(id)a0 context:(long long)a1 dataProvider:(id)a2;

@end
