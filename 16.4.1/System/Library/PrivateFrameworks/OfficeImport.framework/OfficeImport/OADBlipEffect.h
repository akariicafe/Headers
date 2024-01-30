@interface OADBlipEffect : NSObject <NSCopying> {
    int mType;
}

- (int)type;
- (id)initWithType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)setStyleColor:(id)a0;

@end
