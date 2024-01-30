@interface OADSystemColor : OADColor {
    int mSystemColorID;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSystemColorID:(int)a0;
- (int)systemColorID;

@end
