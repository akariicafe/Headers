@class NSString;

@interface PXGFloatValuesColorLookupCube : PXGColorLookupCube

@property (readonly, nonatomic) float *colorValuesData;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) NSString *identifier;

+ (BOOL)_parseLUTData:(id)a0 resultHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;

- (void /* unknown type, empty encoding */)center;
- (BOOL)shouldCache;
- (id)createTextureWithContext:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)textureData;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)blendWithCube:(id)a0 factor:(float)a1;
- (id)initWithContentsOfURL:(id)a0 format:(long long)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 usedFormat:(out long long *)a1 error:(id *)a2;
- (id)initWithData:(id)a0 format:(long long)a1 error:(id *)a2;
- (id)initWithEdgeSize:(long long)a0 colorValuesData:(const float *)a1 length:(unsigned long long)a2 identifier:(id)a3;
- (void)smoothWithFactor:(float)a0;

@end
