@protocol MTLTexture;

@interface NTKCharacterTexture : NSObject

@property (retain, nonatomic) id<MTLTexture> mtlTexture;
@property (nonatomic) unsigned int gid;
@property (readonly, nonatomic) const void *data;
@property (readonly, nonatomic) int length;

- (void).cxx_destruct;
- (id)initWithData:(const void *)a0 length:(int)a1;

@end
