@interface OADEffect : NSObject <NSCopying> {
    int mType;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(int)a0;
- (int)type;
- (unsigned long long)hash;
- (void)setStyleColor:(id)a0;

@end
