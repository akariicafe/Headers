@class NSRecursiveLock, NSMutableDictionary, GKNATObserver_SCContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface GKNATObserverInternal : GKNATObserver {
    id _delegate;
    struct __SCDynamicStore { } *_dynamicStore;
    NSRecursiveLock *_xNATCheck;
    int _lastReportedNATType;
    int _lastReportedCarrierNATType;
    int _lastReportedNonCarrierNATType;
    NSMutableDictionary *_interfaceInfoDictionary;
    BOOL _nonCarrierInterfacesOnly;
    BOOL _checkTCPAndSSL;
    BOOL _favorNonCarrier;
    BOOL _newCarrierType;
    BOOL _addInRangeFlag;
    BOOL _addCarrierFlag;
    BOOL _ignoreNatTypeCache;
    BOOL _ignoreCarrierBundle;
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    NSMutableDictionary *_currentNetworkNames;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    BOOL _fNATCheckQueued;
    BOOL _fNATCheckInProgress;
    GKNATObserver_SCContext *_sccontext;
    BOOL _hasNATCheckStarted;
    BOOL _hasNATCheckEnded;
}

- (id)nameForNetworkWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 interfaceName:(id)a1;
- (void)shouldTryNATCheck;
- (void)NATCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(BOOL)a2;
- (id)initWithOptions:(id)a0;
- (void)cacheNATFlags:(id)a0 forNetwork:(id)a1;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(BOOL)a2;
- (int)currentNATType;
- (void)setDelegate:(id)a0;
- (BOOL)ensureNatCachePathExists;
- (id)copyNatTypeCache_OSXGamedScheme;
- (void)updateNatTypeCache:(id)a0;
- (struct tagCommNATInfo { unsigned int x0; unsigned int x1; unsigned short x2[3]; unsigned int x3; } *)callCommNATTestFromIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1;
- (void)updateNatTypeCache_OSXGamedScheme:(id)a0;
- (void)reportNATType;
- (unsigned int)setCommNATFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2;
- (void)tryNATCheckWithDelay:(double)a0;
- (id)init;
- (id)delegate;
- (void)registerForNetworkChanges;
- (id)copyNatTypeCache;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(BOOL)a2;
- (int)natTypeForCommNATFlags:(unsigned int)a0 isCarrier:(BOOL)a1;
- (unsigned int)setTCPFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2;
- (void)calculateSummmaryNATType:(int *)a0 andCarrierNATType:(int *)a1 andNonCarrierNATType:(int *)a2 copyInterfaceInfoDictionary:(id *)a3;
- (id)lookupCachedNATFlagsForNetwork:(id)a0;
- (void)dealloc;
- (unsigned int)setFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2 isCachedKey:(id)a3 mask:(unsigned int)a4;
- (void)updateNatTypeCache_CachePlistScheme:(id)a0;
- (unsigned int)setSSLFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2;
- (oneway void)release;
- (id)copyNatTypeCachePlistScheme;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 ToServer:(id)a2 isSSL:(BOOL)a3;
- (void)clearRetries;

@end
