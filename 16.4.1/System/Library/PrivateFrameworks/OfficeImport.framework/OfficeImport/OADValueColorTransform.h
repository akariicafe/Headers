@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}

- (BOOL)isEqual:(id)a0;
- (float)value;
- (unsigned long long)hash;
- (void)setValue:(float)a0;

@end
