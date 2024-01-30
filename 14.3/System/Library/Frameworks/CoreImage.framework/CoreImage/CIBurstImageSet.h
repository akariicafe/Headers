@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {
    CIBurstImageSetInternal *_priv;
}

+ (id)defaultVersionString;
+ (id)burstImageSet;
+ (id)burstImageSetWithOptions:(id)a0;

- (id)initWithOptions:(id)a0;
- (BOOL)isPortrait;
- (id)init;
- (void)dealloc;
- (id)burstId;
- (BOOL)isAction;
- (void)addImageFromIOSurface:(struct __IOSurface { } *)a0 properties:(id)a1 identifier:(id)a2 completionBlock:(id /* block */)a3;
- (double)secondsSinceStart;
- (id)bestImageIdentifiers;
- (id)allImageIdentifiers;
- (id)statsForImageWithIdentifier:(id)a0;
- (id)imageClusterForIdentifier:(id)a0;
- (id)coverImageIdentifier;
- (unsigned long long)imageClusterCount;
- (id)imageClusterForIndex:(unsigned long long)a0;
- (void)setLoggingListener:(void *)a0 withUserInfo:(void *)a1;

@end
