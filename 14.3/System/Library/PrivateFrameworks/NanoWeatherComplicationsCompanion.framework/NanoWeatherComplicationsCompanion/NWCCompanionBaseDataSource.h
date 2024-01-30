@class NSString, CLKComplicationTemplate;

@interface NWCCompanionBaseDataSource : CLKCComplicationBundleDataSource {
    CLKComplicationTemplate *_template;
}

@property (class, readonly) NSString *complicationLocalizationKey;

+ (id)appIdentifier;
+ (id)localizedAppName;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_localeDidChange:(id)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)sampleTemplate;

@end
