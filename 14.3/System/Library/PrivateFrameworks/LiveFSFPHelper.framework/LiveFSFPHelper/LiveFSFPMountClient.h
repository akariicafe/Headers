@interface LiveFSFPMountClient : LiveFSMountClient

+ (id)newClientForProvider:(id)a0;
+ (id)locallyBuiltDomainStorageSuffix;
+ (id)locallyBuildFPDomain:(id)a0 displayName:(id)a1 provider:(id)a2 how:(int)a3;
+ (id)locallyDestroyFPDomain:(id)a0 provider:(id)a1;

- (id)fixupConnectionFor:(id)a0;
- (id)mountVolume:(id)a0 displayName:(id)a1 provider:(id)a2 domainError:(id)a3 on:(id)a4 how:(int)a5;
- (id)mountVolume:(id)a0 displayName:(id)a1 provider:(id)a2 on:(id)a3 how:(int)a4;
- (id)mountVolume:(id)a0 provider:(id)a1 on:(id)a2 how:(int)a3;
- (id)updateErrorStateForVolume:(id)a0 provider:(id)a1 domainError:(id)a2;

@end
