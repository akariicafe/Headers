@class NSMutableArray;

@interface TXRArrayElement : NSObject <NSCopying>

@property (readonly) NSMutableArray *faces;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initAsLevel:(unsigned long long)a0 element:(unsigned long long)a1 cubemap:(BOOL)a2 dataSourceProvider:(id)a3;
- (id)initAsLevel:(SEL)a0 element:(unsigned long long)a1 dimensions:(unsigned long long)a2 pixelFormat:(unsigned long long)a3 alphaInfo:(unsigned long long)a4 cubemap:(BOOL)a5 bufferAllocator:(id)a6;
- (void)setImage:(id)a0 atFace:(unsigned long long)a1;

@end
