@class IOKConnection, NSObject, TSgPTPClock;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject {
    IOKConnection *_connection;
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
}

@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier;
@property (readonly, retain, nonatomic) TSgPTPClock *systemDomain;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)a0;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)systemDomain;
- (BOOL)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)addAirPlayDomain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAirPlayDomainWithError:(id *)a0;

@end
