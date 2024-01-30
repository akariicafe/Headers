@class PKPassTileStateMetadataVehicleFunction;

@interface PKPassTileStateMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileStateMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (readonly, nonatomic) long long type;

+ (id)_createWithType:(long long)a0;
+ (id)_createForType:(long long)a0 dictionary:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0;
- (BOOL)isEqualToUnresolvedMetadata:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
