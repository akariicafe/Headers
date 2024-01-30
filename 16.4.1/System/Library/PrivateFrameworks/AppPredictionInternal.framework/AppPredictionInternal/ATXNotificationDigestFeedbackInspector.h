@interface ATXNotificationDigestFeedbackInspector : NSObject

- (void)setHistogramValueForBundleId:(id)a0 location:(id)a1 feedback:(id)a2 value:(id)a3 withReply:(id /* block */)a4;
- (id)_formatFeedbackDataForBundleId:(id)a0 feedback:(id)a1;
- (id)_histogramKeyForLocation:(id)a0 feedback:(id)a1;
- (void)addToHistogramForBundleId:(id)a0 location:(id)a1 feedback:(id)a2 withReply:(id /* block */)a3;
- (void)clearHistogramWithShouldResetBookmarks:(BOOL)a0 reply:(id /* block */)a1;
- (void)showHistogramForBundleId:(id)a0 withReply:(id /* block */)a1;

@end
