@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {
    CIBurstImageSetInternal *_priv;
}

+ (id)burstImageSet;
+ (id)burstImageSetWithOptions:(id)a0;
+ (id)defaultVersionString;

- (BOOL)isPortrait;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)a0;
- (id)burstId;
- (void)addImageFromIOSurface:(struct __IOSurface { } *)a0 properties:(id)a1 identifier:(id)a2 completionBlock:(id /* block */)a3;
- (id)allImageIdentifiers;
- (id)bestImageIdentifiers;
- (id)coverImageIdentifier;
- (unsigned long long)imageClusterCount;
- (id)imageClusterForIdentifier:(id)a0;
- (id)imageClusterForIndex:(unsigned long long)a0;
- (BOOL)isAction;
- (double)secondsSinceStart;
- (void)setLoggingListener:(void *)a0 withUserInfo:(void *)a1;
- (id)statsForImageWithIdentifier:(id)a0;

@end
