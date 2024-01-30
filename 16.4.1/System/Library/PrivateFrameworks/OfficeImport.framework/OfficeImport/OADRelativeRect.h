@interface OADRelativeRect : NSObject <NSCopying> {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (float)right;
- (float)bottom;
- (float)left;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setTop:(float)a0;
- (unsigned long long)hash;
- (void)setBottom:(float)a0;
- (id)init;
- (id)description;
- (float)top;
- (void)setLeft:(float)a0;
- (void)setRight:(float)a0;
- (id)initWithLeft:(float)a0 top:(float)a1 right:(float)a2 bottom:(float)a3;

@end
