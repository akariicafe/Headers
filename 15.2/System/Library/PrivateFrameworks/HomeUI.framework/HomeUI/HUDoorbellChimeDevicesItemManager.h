@class NSString;

@interface HUDoorbellChimeDevicesItemManager : HFItemManager <HFMediaAccessoryCommonSettingsDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_buildItemProvidersForHome:(id)a0;
- (void)mediaProfileContainer:(id)a0 didUpdateSettingKeypath:(id)a1 value:(id)a2;
- (id)enableDoorbellChime:(BOOL)a0 forItem:(id)a1;

@end
