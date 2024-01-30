@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>

@property (readonly, nonatomic) long long radioType;
@property (readonly, copy, nonatomic) NSNumber *frequency;
@property (readonly, copy, nonatomic) NSString *stationName;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSNumber *presetNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setFrequency:(id)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setChannel:(id)a0;
- (void)setRadioType:(long long)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setStationName:(id)a0;
- (void)setPresetNumber:(id)a0;
- (id)initWithRadioType:(long long)a0 frequency:(id)a1 stationName:(id)a2 channel:(id)a3 presetNumber:(id)a4;
- (id)_dictionaryRepresentation;

@end
