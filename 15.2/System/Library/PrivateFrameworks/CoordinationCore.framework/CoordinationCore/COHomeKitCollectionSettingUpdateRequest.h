@class NSArray, CODistantAccessoryCollectionSetting;

@interface COHomeKitCollectionSettingUpdateRequest : COMeshRequest

@property (readonly, copy, nonatomic) CODistantAccessoryCollectionSetting *setting;
@property (readonly, copy, nonatomic) NSArray *originalItems;
@property (readonly, copy, nonatomic) NSArray *replacementItems;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryCollectionSetting:(id)a0 replaceItems:(id)a1 withItems:(id)a2;

@end
