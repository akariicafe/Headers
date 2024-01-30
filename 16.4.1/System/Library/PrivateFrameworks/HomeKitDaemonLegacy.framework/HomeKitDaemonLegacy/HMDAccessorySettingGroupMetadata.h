@class NSString, NSArray;

@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSArray *groups;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupWithDictonaryRepresentation:(id)a0 parentKeyPath:(id)a1;
+ (id)groupsWithArrayRepresenation:(id)a0 parentKeyPath:(id)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 settings:(id)a1 groups:(id)a2;
- (id)initWithName:(id)a0 settings:(id)a1 groups:(id)a2 parentKeyPath:(id)a3;
- (id)modelsWithParentIdentifier:(id)a0;

@end
