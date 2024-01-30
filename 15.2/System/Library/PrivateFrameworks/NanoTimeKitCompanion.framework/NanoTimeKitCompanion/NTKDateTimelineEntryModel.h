@interface NTKDateTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) BOOL lunar;

- (id)templateForComplicationFamily:(long long)a0;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newModularSmallTemplate;
- (id)_newModularLargeTemplate;
- (id)_newSimpleTextTemplate;
- (id)_newModularSmallLunarTemplate;
- (id)_newModularLargeLunarTemplate;
- (id)_newSmallFlatUtilitarianTemplate;
- (id)_newLargeUtilitarianTemplate;
- (id)_newCircularTemplateMedium:(BOOL)a0;
- (id)_newExtraLargeLunarTemplate;
- (id)_newBezelTemplate;
- (id)_simpleTextShortDateProvider;

@end
