@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) NSString *momentUUID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetUUID:(id)a0 momentUUID:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
