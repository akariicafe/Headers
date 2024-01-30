@interface DNDSMutableModeConfigurationsRecord : DNDSModeConfigurationsRecord

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMode:(id)a0 forModeIdentifier:(id)a1;
- (void)setConfiguration:(id)a0 forModeIdentifier:(id)a1;
- (void)setModeConfiguration:(id)a0 forModeIdentifier:(id)a1;
- (void)setTriggers:(id)a0 forModeIdentifier:(id)a1;

@end
