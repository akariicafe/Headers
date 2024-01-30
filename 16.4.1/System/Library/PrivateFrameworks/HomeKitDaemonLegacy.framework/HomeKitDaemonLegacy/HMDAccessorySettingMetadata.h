@class NSString, HMDAccessorySettingMergeStrategy, NSArray;

@interface HMDAccessorySettingMetadata : HMFObject <HMFObject>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *keyPath;
@property (readonly) long long type;
@property (readonly) unsigned long long properties;
@property (readonly) HMDAccessorySettingMergeStrategy *mergeStrategy;
@property (readonly, copy) NSArray *constraints;
@property (readonly) id value;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingWithDictonaryRepresentation:(id)a0 parentKeyPath:(id)a1;
+ (id)settingsWithArrayRepresenation:(id)a0 parentKeyPath:(id)a1;
+ (id)valueWithType:(long long)a0 constraints:(id)a1 representation:(id)a2;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(long long)a1 properties:(unsigned long long)a2 constraints:(id)a3 mergeStrategy:(id)a4 value:(id)a5 parentKeyPath:(id)a6;
- (id)modelWithParentIdentifier:(id)a0;
- (id)modelsWithParentIdentifier:(id)a0;

@end
