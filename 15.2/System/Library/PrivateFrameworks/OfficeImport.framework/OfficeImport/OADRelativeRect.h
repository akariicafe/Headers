@interface OADRelativeRect : NSObject <NSCopying> {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (float)top;
- (void)setTop:(float)a0;
- (float)bottom;
- (void)setLeft:(float)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)right;
- (unsigned long long)hash;
- (float)left;
- (void)setBottom:(float)a0;
- (void)setRight:(float)a0;
- (id)initWithLeft:(float)a0 top:(float)a1 right:(float)a2 bottom:(float)a3;

@end
