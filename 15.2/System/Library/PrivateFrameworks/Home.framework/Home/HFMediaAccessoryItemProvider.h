@class HMHome, NSMutableSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFMediaAccessoryItemProvider : HFItemProvider <HFMediaAccessoryCommonSettingsDelegate>

@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (nonatomic) BOOL includeSiriEndPointProfiles;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) BOOL includeMediaSystems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 includeMediaSystems:(BOOL)a1;
- (id)_siriEndpoints;
- (void)mediaProfileContainer:(id)a0 didUpdateSettingKeypath:(id)a1 value:(id)a2;
- (id)initWithHome:(id)a0 includeSiriEndPointProfiles:(BOOL)a1;

@end
