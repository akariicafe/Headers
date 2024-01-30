@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (float)width;
- (void)setWidth:(float)a0;
- (void)setHeight:(float)a0;
- (int)type;
- (float)height;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
