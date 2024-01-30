@class IOKConnection, NSObject, IOKService, TSgPTPClock;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
}

@property (readonly, nonatomic) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long copresencePTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier;
@property (readonly, retain, nonatomic) TSgPTPClock *systemDomain;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)a0;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)a0;

- (BOOL)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeCopresencePTPInstanceWithError:(id *)a0;
- (BOOL)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addCopresencePTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAirPlayPTPInstanceWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (id)systemDomain;
- (void)dealloc;

@end
