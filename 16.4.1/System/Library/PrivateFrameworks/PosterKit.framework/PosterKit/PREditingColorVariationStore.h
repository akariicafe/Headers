@class NSMutableDictionary;

@interface PREditingColorVariationStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *variationStorage;
@property (retain, nonatomic) NSMutableDictionary *persistentVariationStorage;

+ (unsigned long long)version;
+ (void)performMigrationsIfNeededForStorage:(id)a0 version:(unsigned long long)a1;
+ (id)posterColorForColor:(id)a0 withAppliedVariation:(double)a1;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)baseColorForVariedColor:(id)a0 forContextIdentifier:(id)a1 variation:(double *)a2 forDataLayerPicker:(BOOL)a3;
- (id)initWithVariationStorage:(id)a0 version:(unsigned long long)a1;
- (void)resetAllValues;
- (void)setVariation:(double)a0 forPickerColor:(id)a1 forContextIdentifier:(id)a2;
- (id)variationForPickerColor:(id)a0 forContextIdentifier:(id)a1;

@end
