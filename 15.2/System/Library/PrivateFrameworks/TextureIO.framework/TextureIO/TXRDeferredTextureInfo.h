@class NSMutableArray, TXRTextureInfo;

@interface TXRDeferredTextureInfo : NSObject

@property (retain, nonatomic) TXRTextureInfo *info;
@property (readonly, nonatomic) NSMutableArray *mipmaps;

- (void).cxx_destruct;
- (id)initWithMipmapLevelCount:(unsigned long long)a0 arrayLength:(unsigned long long)a1 cubemap:(BOOL)a2;

@end
