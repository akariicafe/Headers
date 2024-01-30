@interface OADDashStop : NSObject <NSCopying> {
    float mDash;
    float mSpace;
}

+ (void)addStopWithDash:(float)a0 space:(float)a1 toArray:(id)a2;

- (float)dash;
- (float)space;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDash:(float)a0 space:(float)a1;

@end
