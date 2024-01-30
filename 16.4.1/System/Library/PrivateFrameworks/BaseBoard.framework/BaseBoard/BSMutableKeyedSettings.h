@interface BSMutableKeyedSettings : BSKeyedSettings

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setFlag:(long long)a0 forKey:(id)a1;
- (void)removeAllSettings;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applySettings:(id)a0;

@end
