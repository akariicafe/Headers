@class NSString, NSArray, HMDAccessorySettingGroupMetadata;

@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject>

@property (readonly) HMDAccessorySettingGroupMetadata *rootGroup;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
