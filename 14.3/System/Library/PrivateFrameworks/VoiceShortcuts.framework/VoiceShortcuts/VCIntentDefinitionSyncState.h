@class NSUUID, NSDictionary, NSString, NSNumber;

@interface VCIntentDefinitionSyncState : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSUUID *databaseUUID;
@property (copy, nonatomic) NSNumber *sequenceNumber;
@property (copy, nonatomic) NSDictionary *applications;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)applicationsJSONTransformer;

- (void).cxx_destruct;

@end
