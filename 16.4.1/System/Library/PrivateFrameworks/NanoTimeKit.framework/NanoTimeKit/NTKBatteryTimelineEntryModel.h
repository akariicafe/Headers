@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) float level;
@property (nonatomic) long long state;

- (id)_levelTintColor;
- (id)_graphicExtraLargeCircularTemplate;
- (id)_newBatteryTemplateForFamily:(long long)a0;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_ringTextProvider;
- (id)_signatureBezelTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureCornerTemplate;
- (id)templateForComplicationFamily:(long long)a0;

@end
