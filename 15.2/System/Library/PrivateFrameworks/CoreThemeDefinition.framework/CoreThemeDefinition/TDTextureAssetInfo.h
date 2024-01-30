@class NSURL;

@interface TDTextureAssetInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSURL *mipsURL;
@property (nonatomic) unsigned long long mipLevel;
@property (nonatomic) long long textureFace;
@property (nonatomic) BOOL flipped;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
