@interface BSMutableSettings : BSSettings

- (void)setFlag:(long long)a0 forSetting:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllSettings;
- (void)applySettings:(id)a0;
- (void)setObject:(id)a0 forSetting:(unsigned long long)a1;

@end
