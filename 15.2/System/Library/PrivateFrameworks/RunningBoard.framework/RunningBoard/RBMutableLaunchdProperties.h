@interface RBMutableLaunchdProperties : RBLaunchdProperties

- (void)setExecutablePath:(id)a0;
- (void)setDoesOverrideManagement:(BOOL)a0;
- (id)initWithProperties:(id)a0;
- (void)setBundleID:(id)a0;
- (void)setPath:(id)a0;
- (void)setMultiInstance:(BOOL)a0;
- (void)setDisableFreezing:(BOOL)a0;
- (void)setJobLabel:(id)a0;
- (void)setSpecifiedIdentity:(id)a0;
- (void)setUnderlyingAssertion:(id)a0;
- (void)setOverrideManageFlags:(unsigned char)a0;
- (void)setHostPid:(int)a0;
- (void)setRequestedJetsamPriority:(int)a0;
- (void)setVariableEUID:(BOOL)a0;
- (void)setIsDaemon;
- (void)setSystemShell:(BOOL)a0;
- (void)setIsAngel;

@end
