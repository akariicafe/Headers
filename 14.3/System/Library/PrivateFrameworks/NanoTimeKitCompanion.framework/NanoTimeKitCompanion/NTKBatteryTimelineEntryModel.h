@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) float level;
@property (nonatomic) long long state;

- (id)templateForComplicationFamily:(long long)a0;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCornerTemplate;
- (id)_graphicExtraLargeCircularTemplate;
- (id)_newBatteryTemplateForFamily:(long long)a0;
- (id)_levelTintColor;
- (id)_ringTextProvider;

@end
