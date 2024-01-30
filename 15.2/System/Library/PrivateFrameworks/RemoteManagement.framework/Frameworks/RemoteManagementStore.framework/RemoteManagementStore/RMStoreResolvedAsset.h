@class NSData, NSURL;

@interface RMStoreResolvedAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *assetData;
@property (readonly, copy, nonatomic) NSURL *assetFile;

- (id)initWithFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToResolvedAsset:(id)a0;

@end
