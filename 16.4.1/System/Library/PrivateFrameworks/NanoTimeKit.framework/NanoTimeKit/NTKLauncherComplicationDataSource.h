@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;

- (id)_symbolName;
- (id)_symbolSize;
- (id)_appBackgroundColor;
- (id)_appTintColor;
- (id)_appTitle;
- (id)_circularTemplateMedium:(BOOL)a0;
- (id)_complicationApplicationIdentifier;
- (id)_complicationLaunchURL;
- (id)_currentTimelineEntry;
- (id)_extraLarge;
- (id)_fullColorImageProvider;
- (id)_graphicExtraLargeTemplate;
- (id)_modularLargeTemplate;
- (id)_modularSmallTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureCornerTemplate;
- (id)_symbolAppFullColorImageProviderIfSupported;
- (id)_symbolAppImageProviderIfSupported;
- (id)_symbolSizeforMailApp;
- (id)_symbolSizeforMapsApp;
- (id)_symbolSizeforTinCanApp;
- (id)_tinCanAppTintColor;
- (id)_tintableAppImageProvider;
- (id)_utilitarianLargeTemplate;
- (id)_utilitarianSmallTemplate;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (unsigned long long)timelineAnimationBehavior;

@end
