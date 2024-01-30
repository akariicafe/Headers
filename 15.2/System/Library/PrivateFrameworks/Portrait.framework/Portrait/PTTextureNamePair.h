@class NSString;
@protocol MTLTexture;

@interface PTTextureNamePair : NSObject

@property (retain) NSString *name;
@property (retain) id<MTLTexture> texture;
@property struct __IOSurface { } *iosurface;

+ (id)createWithName:(id)a0 texture:(id)a1;

- (void).cxx_destruct;

@end
