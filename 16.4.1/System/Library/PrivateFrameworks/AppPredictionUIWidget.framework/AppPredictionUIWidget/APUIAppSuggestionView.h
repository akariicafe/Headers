@class UITapGestureRecognizer, APUIAppIconDataSource, NSString;

@interface APUIAppSuggestionView : APUISuggestionView {
    APUIAppIconDataSource *_dataSource;
    UITapGestureRecognizer *_tapRecognizer;
    NSString *_appBundleId;
}

- (void)_tapRecognized:(id)a0;
- (void).cxx_destruct;
- (void)_setAppWithBundleId:(id)a0 reason:(id)a1;
- (void)layoutSuggestion:(id)a0;

@end
