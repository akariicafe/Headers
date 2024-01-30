@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;

- (id)_symbolName;
- (id)_symbolSize;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)currentSwitcherTemplate;
- (id)complicationApplicationIdentifier;
- (id)_currentTimelineEntry;
- (unsigned long long)timelineAnimationBehavior;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)_signatureCornerTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_utilitarianLargeTemplate;
- (id)_circularTemplateMedium:(BOOL)a0;
- (id)_modularSmallTemplate;
- (id)_modularLargeTemplate;
- (id)_utilitarianSmallTemplate;
- (id)_extraLarge;
- (id)_graphicExtraLargeTemplate;
- (id)_appTintColor;
- (id)_complicationLaunchURL;
- (id)_complicationApplicationIdentifier;
- (id)_tintableAppImageProvider;
- (id)_appTitle;
- (id)_fullColorImageProvider;
- (id)_symbolSizeforMapsApp;
- (id)_symbolSizeforMailFindMyApps;
- (id)_symbolSizeforTinCanApp;
- (id)_symbolAppImageProviderIfSupported;
- (id)_symbolAppFullColorImageProviderIfSupported;
- (id)_tinCanAppTintColor;
- (id)_appBackgroundColor;

@end
