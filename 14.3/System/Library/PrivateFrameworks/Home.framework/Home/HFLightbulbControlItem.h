@interface HFLightbulbControlItem : HFIncrementalStateControlItem

+ (id)optionsForPrimaryStateControlItem:(id)a0 incrementalCharacteristicType:(id)a1;
+ (id)readOnlyCharacteristicTypes;

- (id)writeValue:(id)a0;
- (id)readValueAndPopulateStandardResults;
- (id)_tintColorFromResults:(id)a0;
- (id)_tintColorForNaturalLightFromResults:(id)a0;
- (BOOL)supportsRGBColor;
- (id)_subclass_updateWithOptions:(id)a0;

@end
