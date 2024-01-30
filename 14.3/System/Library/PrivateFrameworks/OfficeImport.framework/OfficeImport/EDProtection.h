@interface EDProtection : NSObject <NSCopying> {
    BOOL mHidden;
    BOOL mLocked;
}

+ (id)protectionWithHidden:(BOOL)a0 locked:(BOOL)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLocked;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHidden;
- (id)initWithHidden:(BOOL)a0 locked:(BOOL)a1;
- (BOOL)isEqualToProtection:(id)a0;

@end
