@class NSArray, NSMutableArray;

@interface TXRMipmapLevel : NSObject <NSCopying> {
    NSMutableArray *_elements;
    unsigned long long _level;
}

@property (readonly) NSArray *elements;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initAsLevel:(unsigned long long)a0 arrayLength:(unsigned long long)a1 cubemap:(BOOL)a2 dataSourceProvider:(id)a3;
- (id)initAsLevel:(SEL)a0 dimensions:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 alphaInfo:(unsigned long long)a3 arrayLength:(unsigned long long)a4 cubemap:(BOOL)a5 bufferAllocator:(id)a6;
- (void)setImage:(id)a0 atElement:(unsigned long long)a1 atFace:(unsigned long long)a2;

@end
