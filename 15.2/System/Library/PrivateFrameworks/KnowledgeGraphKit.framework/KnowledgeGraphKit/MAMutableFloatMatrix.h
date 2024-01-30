@class _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper;

@interface MAMutableFloatMatrix : MAFloatMatrix

@property (readonly, nonatomic) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper *wrapper;

+ (Class)wrapperClass;

- (void)appendRow:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFloat:(float)a0 atRow:(long long)a1 column:(long long)a2;
- (void)subtractScalar:(float)a0;
- (void)addScalar:(float)a0;
- (void)subtractMatrix:(id)a0;

@end
