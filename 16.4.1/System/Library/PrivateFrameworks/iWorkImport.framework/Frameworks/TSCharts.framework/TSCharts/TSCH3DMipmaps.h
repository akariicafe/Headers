@class NSData;

@interface TSCH3DMipmaps : NSObject

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) unsigned long long components;
@property (readonly, nonatomic) NSData *data;

+ (id)mipmapNameFromImageName:(id)a0;
+ (struct CGSize { double x0; double x1; })mipmapSizeForTexturableSize:(struct CGSize { double x0; double x1; })a0;
+ (id)mipmapsFromData:(id)a0;
+ (id)mipmapsWithWidth:(int)a0 height:(int)a1 components:(unsigned long long)a2 mipmapData:(id)a3;
+ (struct CGSize { double x0; double x1; })optimizedMipmapLevel0Size;

- (BOOL)valid;
- (id)description;
- (void).cxx_destruct;
- (BOOL)writeToFile:(id)a0;
- (id)initFromData:(id)a0;
- (id)initWithWidth:(int)a0 height:(int)a1 components:(unsigned long long)a2 mipmapData:(id)a3;

@end
