@class UITapGestureRecognizer, APUIAppIconDataSource, NSString;

@interface APUIAppSuggestionView : APUISuggestionView {
    APUIAppIconDataSource *_dataSource;
    UITapGestureRecognizer *_tapRecognizer;
    NSString *_appBundleId;
}

- (void).cxx_destruct;
- (void)_tapRecognized:(id)a0;
- (void)layoutSuggestion:(id)a0;
- (void)_setAppWithBundleId:(id)a0 reason:(id)a1;

@end
