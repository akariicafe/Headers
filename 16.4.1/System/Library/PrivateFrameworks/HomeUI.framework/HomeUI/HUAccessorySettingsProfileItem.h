@class NSUUID, HMSetting, MCProfile;

@interface HUAccessorySettingsProfileItem : HFItem

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) MCProfile *profile;
@property (readonly, nonatomic) HMSetting *setting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithProfile:(id)a0 setting:(id)a1;

@end
