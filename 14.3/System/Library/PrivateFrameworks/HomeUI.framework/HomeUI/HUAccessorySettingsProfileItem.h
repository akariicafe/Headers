@class NSUUID, HMSetting, MCProfile;

@interface HUAccessorySettingsProfileItem : HFItem

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) MCProfile *profile;
@property (readonly, nonatomic) HMSetting *setting;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithProfile:(id)a0 setting:(id)a1;

@end
