@interface BSMutableKeyedSettings : BSKeyedSettings

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllSettings;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)applySettings:(id)a0;
- (void)setFlag:(long long)a0 forKey:(id)a1;

@end
