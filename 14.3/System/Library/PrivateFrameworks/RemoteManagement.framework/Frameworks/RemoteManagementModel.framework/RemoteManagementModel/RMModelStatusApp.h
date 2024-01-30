@class NSSet, NSString, NSNumber;

@interface RMModelStatusApp : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusBundleId;
@property (copy, nonatomic) NSString *statusName;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSNumber *statusIsSystem;
@property (copy, nonatomic) NSNumber *statusIsManaged;

+ (id)buildWithBundleId:(id)a0 name:(id)a1 version:(id)a2 isSystem:(id)a3 isManaged:(id)a4;
+ (id)buildRequiredOnlyWithBundleId:(id)a0 isSystem:(id)a1 isManaged:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
