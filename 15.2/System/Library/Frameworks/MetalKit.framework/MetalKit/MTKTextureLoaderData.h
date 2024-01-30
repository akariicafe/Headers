@class NSString;

@interface MTKTextureLoaderData : NSObject

@property (retain, nonatomic) NSString *imageOrigin;
@property (nonatomic) unsigned long long numArrayElements;
@property (nonatomic) unsigned long long numFaces;
@property (nonatomic) unsigned long long numMipmapLevels;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long pixelFormat;

- (id)init;
- (void)dealloc;
- (id)getDataForArrayElement:(unsigned long long)a0 face:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 bytesPerRow:(unsigned long long *)a4 bytesPerImage:(unsigned long long *)a5;

@end
