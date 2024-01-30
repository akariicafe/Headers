@interface DNDSMutableSyncSettings : DNDSSyncSettings

@property (nonatomic, getter=isPairSyncEnabled) BOOL pairSyncEnabled;
@property (nonatomic, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCloudSyncEnabled:(BOOL)a0;
- (void)setPairSyncEnabled:(BOOL)a0;

@end
