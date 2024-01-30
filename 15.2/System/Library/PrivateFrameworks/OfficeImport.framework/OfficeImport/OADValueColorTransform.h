@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}

- (void)setValue:(float)a0;
- (float)value;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
