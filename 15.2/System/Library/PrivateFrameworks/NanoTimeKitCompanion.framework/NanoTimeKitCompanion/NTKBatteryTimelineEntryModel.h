@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) float level;
@property (nonatomic) long long state;

- (id)templateForComplicationFamily:(long long)a0;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_signatureCornerTemplate;
- (id)_signatureCircularTemplate;
- (id)_graphicExtraLargeCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_newBatteryTemplateForFamily:(long long)a0;
- (id)_levelTintColor;
- (id)_ringTextProvider;

@end
