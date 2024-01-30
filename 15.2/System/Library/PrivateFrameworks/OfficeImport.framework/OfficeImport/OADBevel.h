@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (float)height;
- (void)setWidth:(float)a0;
- (id)description;
- (float)width;
- (void)setHeight:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;

@end
