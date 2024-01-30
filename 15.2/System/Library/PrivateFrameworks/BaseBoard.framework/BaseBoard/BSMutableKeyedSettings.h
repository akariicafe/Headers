@interface BSMutableKeyedSettings : BSKeyedSettings

- (void)removeAllSettings;
- (void)applySettings:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setFlag:(long long)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
