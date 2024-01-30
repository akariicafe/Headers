@class NSString, NSSet, NSManagedObjectID;

@interface PLPTPAssetHandle : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSManagedObjectID *assetID;
@property (readonly, copy, nonatomic) NSManagedObjectID *sidecarID;
@property (readonly, nonatomic) BOOL requiresConversion;
@property (readonly, nonatomic) NSString *auxiliaryResourceFilenameMarker;
@property (readonly, copy, nonatomic) NSSet *siblingAssetHandleTypes;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)assetHandleBySettingRequiresConversion;
- (id)assetHandleBySettingSiblingAssetHandleTypes:(id)a0;
- (BOOL)hasSiblingAssetWithAssetHandleType:(long long)a0;
- (id)initWithType:(long long)a0 assetID:(id)a1 sidecarID:(id)a2 requiresConversion:(BOOL)a3;
- (id)initWithType:(long long)a0 assetID:(id)a1 sidecarID:(id)a2 requiresConversion:(BOOL)a3 siblingAssetHandleTypes:(id)a4;

@end
