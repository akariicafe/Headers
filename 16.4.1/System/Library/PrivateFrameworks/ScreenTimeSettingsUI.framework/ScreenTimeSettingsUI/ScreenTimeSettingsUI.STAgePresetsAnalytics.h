@interface ScreenTimeSettingsUI.STAgePresetsAnalytics : NSObject <ScreenTimeSettingsUI.STAgePresetsAnalyticsProtocol> {
    void /* unknown type, empty encoding */ sessionId;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendChooseAgeButtonTappedAnalyticsEvent;
- (void)sendEnabledRestrictionsEventWithSelectionType:(long long)a0 lowerBound:(id)a1 upperBound:(id)a2;
- (void)sendPresetsValueChangedAnalyticsEventWithRecommendedPresetId:(id)a0 fieldName:(id)a1 recomendedValue:(id)a2 selectedValue:(id)a3;
- (void)sendPresetsViewedAnalyticsEventWithIsInitialSetup:(BOOL)a0;
- (void)sendResetAgePresetSelectedAnalyticsEvent;
- (void)sendSelectedAgeRangeAnalyticsEventWithLowerBound:(long long)a0 upperBound:(long long)a1;
- (void)sendSkippedAnalyticsEvent;

@end
