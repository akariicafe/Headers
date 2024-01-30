@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {
    unsigned long long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)a0 color:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)color;
- (id)description;
- (void)setColor:(id)a0;
- (void)setMatrixIndex:(unsigned long long)a0;
- (unsigned long long)matrixIndex;
- (id)initWithMatrixIndex:(unsigned long long)a0 color:(id)a1;

@end
