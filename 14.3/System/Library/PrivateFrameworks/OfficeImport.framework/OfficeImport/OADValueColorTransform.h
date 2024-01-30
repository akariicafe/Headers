@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}

- (float)value;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(float)a0;

@end
