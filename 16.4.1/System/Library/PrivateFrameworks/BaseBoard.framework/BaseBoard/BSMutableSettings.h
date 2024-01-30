@interface BSMutableSettings : BSSettings

- (void)removeAllSettings;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applySettings:(id)a0;
- (void)setFlag:(long long)a0 forSetting:(unsigned long long)a1;
- (void)setObject:(id)a0 forSetting:(unsigned long long)a1;

@end
