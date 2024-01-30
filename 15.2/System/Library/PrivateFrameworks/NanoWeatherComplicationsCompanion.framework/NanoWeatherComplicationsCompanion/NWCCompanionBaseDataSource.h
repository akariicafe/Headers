@class NSString, CLKComplicationTemplate;

@interface NWCCompanionBaseDataSource : CLKCComplicationBundleDataSource {
    CLKComplicationTemplate *_template;
}

@property (class, readonly) NSString *complicationLocalizationKey;

+ (id)appIdentifier;
+ (id)localizedAppName;

- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (void)dealloc;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)sampleTemplate;

@end
