@class NSString, NSData, NSDate;

@interface WFRealmCloudKitSyncToken : RLMObject <WFRecordStorage>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *account;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSData *serverChangeTokenData;
@property (copy, nonatomic) NSData *lastOrderingData;
@property (copy, nonatomic) NSData *lastOrderingCloudKitRecordMetadata;
@property (copy, nonatomic) NSData *syncEngineMetadata;
@property (copy, nonatomic) NSData *syncFlagsCloudKitRecordMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (id)className;
+ (id)syncTokenInRealm:(id)a0;
+ (void)setSyncToken:(id)a0 inRealm:(id)a1;

- (void).cxx_destruct;
- (id)descriptor;

@end
