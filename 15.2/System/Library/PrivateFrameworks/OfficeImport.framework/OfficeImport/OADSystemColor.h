@interface OADSystemColor : OADColor {
    int mSystemColorID;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSystemColorID:(int)a0;
- (int)systemColorID;

@end
