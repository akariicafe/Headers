@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying> {
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *cloudKitIdentifier;

+ (BOOL)rollOwnerDifferentiatorAfterCloudSyncDisableForProfile:(id)a0 error:(id *)a1;
+ (id)ownerIdentifierForSyncContainer:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)rollOwnerDifferentiatorForProfile:(id)a0 reason:(id)a1 error:(id *)a2;
+ (id)_databaseUUIDForProfile:(id)a0 error:(id *)a1;
+ (id)deviceIDForContainer:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)_canRollOwnerIdentifierForProfile:(id)a0;
+ (BOOL)_rollOwnerDifferentiatorForProfile:(id)a0 reason:(id)a1 error:(id *)a2;
+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)a0 deviceIdentifier:(id)a1 ownerDifferentiator:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDatabaseIdentifer:(id)a0 deviceIdentifier:(id)a1 ownerDifferentiator:(id)a2;

@end
