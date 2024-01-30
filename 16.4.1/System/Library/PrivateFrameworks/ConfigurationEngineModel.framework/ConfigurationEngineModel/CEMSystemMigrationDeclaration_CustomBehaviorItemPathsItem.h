@class NSSet, NSString, NSNumber;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItemPathsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadSourcePath;
@property (copy, nonatomic) NSNumber *payloadSourcePathInUserHome;
@property (copy, nonatomic) NSString *payloadTargetPath;
@property (copy, nonatomic) NSNumber *payloadTargetPathInUserHome;

+ (id)buildRequiredOnlyWithSourcePath:(id)a0 withSourcePathInUserHome:(id)a1 withTargetPath:(id)a2 withTargetPathInUserHome:(id)a3;
+ (id)buildWithSourcePath:(id)a0 withSourcePathInUserHome:(id)a1 withTargetPath:(id)a2 withTargetPathInUserHome:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
