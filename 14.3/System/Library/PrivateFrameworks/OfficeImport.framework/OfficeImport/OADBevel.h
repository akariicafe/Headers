@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (float)width;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(int)a0;
- (void)setHeight:(float)a0;
- (unsigned long long)hash;
- (float)height;
- (id)description;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (void)setWidth:(float)a0;

@end
