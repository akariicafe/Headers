@class HKCalendarCache;

@interface WDAFibBurdenListDataProvider : WDQuantityListDataProvider <HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> {
    HKCalendarCache *_calendarCache;
}

- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)featureVersionForSample:(id)a0;
- (id)updateVersionForSample:(id)a0;
- (id)_generateFeatureVersionFromUpdateVersion:(id)a0;
- (id)_timeZoneForSample:(id)a0;
- (id)secondaryTextForObject:(id)a0;

@end
