@class NSArray, NSString;

@interface ADEspressoBufferHandle : NSObject {
    NSString *_name;
    void *_rawData;
    NSArray *_dimensions;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _channels;
    unsigned long long _size;
}

@property (readonly, nonatomic) void *data;
@property (readonly, nonatomic) NSArray *dimensions;
@property (readonly, nonatomic) unsigned long long dimensionsProduct;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long channels;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)copyTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 buffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a1;
- (void)clearBuffer;
- (id)initWithName:(id)a0 rawData:(void *)a1 dimensions:(id)a2 strides:(id)a3;

@end
