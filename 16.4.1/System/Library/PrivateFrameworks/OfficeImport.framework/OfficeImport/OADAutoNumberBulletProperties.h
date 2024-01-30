@interface OADAutoNumberBulletProperties : OADBulletProperties {
    int mSchemeType;
    unsigned long long mStartIndex;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)startIndex;
- (int)autoNumberSchemeType;
- (id)initWithAutoNumberSchemeType:(int)a0 startIndex:(unsigned long long)a1;

@end
