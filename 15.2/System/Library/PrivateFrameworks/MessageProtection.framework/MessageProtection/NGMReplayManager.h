@class NSPersistentContainer;

@interface NGMReplayManager : NSObject {
    NSPersistentContainer *_persistentContainer;
}

+ (id)sharedManager;

- (BOOL)isXCTest;
- (id)persistentStoreDescription;
- (BOOL)isBATS;
- (id)registeredPrekeyForNGMPrekey:(id)a0 objectContext:(id)a1;
- (unsigned int)counterForDestinationWithIdentityKey:(id)a0 sendingIdentity:(id)a1 error:(id *)a2 success:(BOOL *)a3;
- (BOOL)isRunningTests;
- (void)logDatabaseCreationDate:(id)a0;
- (id)dbNameFromProcess;
- (void).cxx_destruct;
- (BOOL)deleteExpiredSendingDestinations;
- (id)computeDestinationHashForOutgoingMessageTo:(id)a0 withLocalKey:(id)a1;
- (id /* block */)validateIncomingCounter:(unsigned int)a0 prekey:(id)a1 publicIdentity:(id)a2 error:(id *)a3;
- (BOOL)deleteReceivingCountersForKey:(id)a0;
- (BOOL)processFetchRequestAndValidate:(id)a0 counter:(unsigned int)a1 commit:(BOOL)a2 theirIdentity:(id)a3 prekey:(id)a4 error:(id *)a5;
- (id)objectContextWithError:(id *)a0;
- (id)persistentContainerWithError:(id *)a0;
- (id)computeDestinationHashForIncomingMessageFrom:(id)a0 toLocalKey:(id)a1;

@end
