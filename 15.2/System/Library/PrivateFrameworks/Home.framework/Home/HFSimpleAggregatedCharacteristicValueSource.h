@class NSSet, NAIdentity, NSString, NSDictionary, HFServiceDescriptor;
@protocol HFCharacteristicValueSource;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFLightProfileAggregatedValueSource, HFAggregatedCharacteristicValueSource>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) NSSet *lightProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *characteristicsByType;
@property (readonly, copy, nonatomic) NSSet *allServices;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, copy, nonatomic) NSSet *characteristics;
@property (readonly, nonatomic) HFServiceDescriptor *primaryServiceDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNaturalLightingEnabled;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)a0 completion:(id /* block */)a1;
- (id)copyWithValueSource:(id)a0;
- (id)initWithValueSource:(id)a0 characteristics:(id)a1 primaryServiceDescriptor:(id)a2;
- (void)beginTransactionWithReason:(id)a0 readPolicy:(id)a1 logger:(id)a2;
- (void)commitTransactionWithReason:(id)a0;
- (id)readValuesForCharacteristicTypes:(id)a0;
- (id)writeValuesForCharacteristicTypes:(id)a0;
- (id)metadataForCharacteristicType:(id)a0;
- (id)readValuesForServiceStateRecipe:(id)a0;
- (id)writeValuesForCharacteristicRecipes:(id)a0;
- (id)allCharacteristicsForCharacteristicType:(id)a0;
- (id)initWithValueSource:(id)a0 services:(id)a1 primaryServiceDescriptor:(id)a2;
- (BOOL)isNaturalLightingSupported;
- (id)writeNaturalLightEnabledState:(BOOL)a0;

@end
