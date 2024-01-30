@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;

- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)currentSwitcherTemplate;
- (id)complicationApplicationIdentifier;
- (id)_currentTimelineEntry;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)_modularSmallTemplate;
- (id)_utilitarianSmallTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCornerTemplate;
- (unsigned long long)timelineAnimationBehavior;
- (id)_utilitarianLargeTemplate;
- (id)_circularTemplateMedium:(BOOL)a0;
- (id)_modularLargeTemplate;
- (id)_extraLarge;
- (id)_graphicExtraLargeTemplate;
- (id)_appTintColor;
- (id)_complicationLaunchURL;
- (id)_complicationApplicationIdentifier;
- (id)_tintableAppImageProvider;
- (id)_appTitle;
- (id)_fullColorImageProvider;
- (id)_tinCanAppTintColor;
- (id)_appBackgroundColor;

@end
