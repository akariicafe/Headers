@protocol ATXPETEventTracker2Protocol;

@interface ATXMagicalMomentsAppPredictorFeedback : NSObject <ATXFeedbackSessionListenerDelegateProtocol> {
    id<ATXPETEventTracker2Protocol> _tracker;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithTracker:(id)a0;
- (void)receiveClientModelResult:(id)a0;
- (id)clientModelIds;
- (void)_handleShownProactiveSuggestion:(id)a0 consumerSubType:(unsigned char)a1 bundleIdToAnchorType:(id)a2;
- (void)_handleEngagedProactiveSuggestion:(id)a0 consumerSubType:(unsigned char)a1 bundleIdToAnchorType:(id)a2;
- (long long)_anchorTypeFromBundleIdToAnchorTypeMap:(id)a0 bundleId:(id)a1;
- (id)getCurrentABGroup;
- (void)logShownMMMetricsEntryForBundle:(id)a0 consumerSubType:(unsigned char)a1 anchorType:(long long)a2 abGroup:(id)a3 score:(double)a4;
- (void)logEngagedMMMetricsEntryForBundle:(id)a0 consumerSubType:(unsigned char)a1 anchorType:(long long)a2 abGroup:(id)a3 score:(double)a4;

@end
