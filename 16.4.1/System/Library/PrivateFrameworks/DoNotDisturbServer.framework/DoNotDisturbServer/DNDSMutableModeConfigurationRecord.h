@interface DNDSMutableModeConfigurationRecord : DNDSModeConfigurationRecord

- (void)setLastModifiedByDeviceID:(id)a0;
- (void)setTriggers:(id)a0;
- (void)setCreated:(id)a0;
- (void)setLastModifiedByVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)setSecureConfiguration:(id)a0;
- (void)setAutomaticallyGenerated:(BOOL)a0;
- (void)setEphemeralResolvedCompatibilityVersion:(long long)a0;
- (void)setCompatibilityVersion:(long long)a0;
- (void)setDimsLockScreen:(unsigned long long)a0;
- (void)setLastModified:(id)a0;
- (void)setImpactsAvailability:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMode:(id)a0;
- (void)setHasSecureData:(BOOL)a0;
- (void)setConfiguration:(id)a0;

@end
