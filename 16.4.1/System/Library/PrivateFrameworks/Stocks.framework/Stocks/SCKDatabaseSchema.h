@class NSArray, NSString, CKContainerID;

@interface SCKDatabaseSchema : NSObject

@property (nonatomic) long long security;
@property (copy, nonatomic) NSArray *zoneSchemas;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long environment;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) NSArray *zoneIDs;
@property (readonly, nonatomic) BOOL requiresDeviceToDeviceEncryption;

- (id)initWithName:(id)a0 environment:(long long)a1 security:(long long)a2 zoneSchemas:(id)a3;
- (id)schemaForZoneName:(id)a0;
- (void).cxx_destruct;

@end
