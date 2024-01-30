@class NSString;

@interface NTKVictoryColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, nonatomic) unsigned long long victoryColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_orderedValuesForDevice:(id)a0;
+ (id)pigmentFaceDomain;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)colorNameForColorValue:(unsigned long long)a0;
+ (id)_orderedValuesRestrictedByDevice:(id)a0;
+ (id)spring2020VictoryColors;
+ (id)graceVictoryColors;
+ (id)gloryEVictoryColors;
+ (id)gloryVictoryColors;
+ (id)optionWithVictoryColor:(unsigned long long)a0 forDevice:(id)a1;
+ (id)fall2020VictoryColors;
+ (unsigned long long)colorCodeForPigmentEditOption:(id)a0 forDevice:(id)a1;

- (id)localizedName;
- (id)pigmentEditOption;
- (id)_valueToFaceBundleStringDict;
- (BOOL)optionExistsInDevice:(id)a0;
- (long long)swatchStyle;
- (id)pigmentCollectionName;

@end
