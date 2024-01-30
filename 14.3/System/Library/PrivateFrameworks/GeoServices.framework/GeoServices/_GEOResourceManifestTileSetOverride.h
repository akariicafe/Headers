@class NSNumber, NSURL;

@interface _GEOResourceManifestTileSetOverride : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) int scale;
@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSURL *localizationURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0 size:(int)a1 scale:(int)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
