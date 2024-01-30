@interface PKPayLaterLoadingViewController : PKPayLaterSetupViewController {
    double _minimumDelayNanoSeconds;
}

- (void)viewDidLoad;
- (void)_updateHeaderSubtitleWithAltTextIfNecessary;
- (id)additionalAnalyticsDictionary;
- (id)initWithSetupFlowController:(id)a0;

@end
