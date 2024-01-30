@interface PDAnimationTextTarget : PDAnimationShapeTarget {
    int mType;
    struct _NSRange { unsigned long long location; unsigned long long length; } mRange;
}

- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;

@end
