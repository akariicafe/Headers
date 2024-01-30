@interface IOKService : IOKRegistryEntry

+ (id)serviceMatching:(id)a0;
+ (id)addNotificationOfType:(id)a0 forMatching:(id)a1 usingNotificationPort:(id)a2 error:(id *)a3 withHandler:(id /* block */)a4;
+ (id)matchingService:(id)a0;
+ (id)matchingServices:(id)a0 error:(id *)a1;
+ (id)nameMatching:(id)a0;
+ (id)bsdNameMatching:(id)a0;
+ (id)entryIDMatching:(unsigned long long)a0;
+ (id)addNotificationOfType:(id)a0 forMatching:(id)a1 usingNotificationPort:(id)a2 error:(id *)a3 withEnumerationBlock:(id /* block */)a4;

- (id)addInterestNotifcationOfType:(id)a0 usingNotificationPort:(id)a1 error:(id *)a2 withHandler:(id /* block */)a3;
- (BOOL)isServiceAuthorizedForOpenAllowInteraction:(BOOL)a0;
- (BOOL)matchesPropertyTable:(id)a0 error:(id *)a1;
- (id)initWithServiceEntry:(unsigned int)a0;
- (id)connectToServiceOfType:(unsigned int)a0;
- (unsigned int)busyState;
- (BOOL)requestProbeWithOptions:(unsigned int)a0 error:(id *)a1;

@end
