@interface OADSystemColor : OADColor {
    int mSystemColorID;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemColorID:(int)a0;
- (int)systemColorID;

@end
