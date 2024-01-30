@protocol MTLBuffer;

@interface AGXA11FamilyWarpFunction : NSObject {
    struct WarpFunction { } *_impl;
}

@property (readonly) id<MTLBuffer> warpParameters;
@property (readonly) unsigned long long unwarpedWidth;
@property (readonly) unsigned long long unwarpedHeight;
@property (readonly) unsigned long long warpedWidth;
@property (readonly) unsigned long long warpedHeight;

- (void)dealloc;
- (const struct WarpFunction { } *)getImpl;

@end
