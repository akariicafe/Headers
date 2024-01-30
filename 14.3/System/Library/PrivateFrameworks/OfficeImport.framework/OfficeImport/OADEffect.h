@interface OADEffect : NSObject <NSCopying> {
    int mType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(int)a0;
- (id)description;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (void)setStyleColor:(id)a0;

@end
