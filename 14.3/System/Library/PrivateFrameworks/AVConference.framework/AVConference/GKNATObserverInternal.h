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

- (id)initWithOptions:(id)a0;
- (id)copyNatTypeCache;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 interfaceName:(id)a1;
- (struct tagCommNATInfo { unsigned int x0; unsigned int x1; unsigned short x2[3]; unsigned int x3; } *)callCommNATTestFromIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1;
- (id)lookupCachedNATFlagsForNetwork:(id)a0;
- (id)init;
- (int)currentNATType;
- (BOOL)ensureNatCachePathExists;
- (void)cacheNATFlags:(id)a0 forNetwork:(id)a1;
- (oneway void)release;
- (unsigned int)setTCPFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2;
- (int)natTypeForCommNATFlags:(unsigned int)a0 isCarrier:(BOOL)a1;
- (void)calculateSummmaryNATType:(int *)a0 andCarrierNATType:(int *)a1 andNonCarrierNATType:(int *)a2 copyInterfaceInfoDictionary:(id *)a3;
- (unsigned int)setSSLFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2;
- (void)dealloc;
- (void)updateNatTypeCache_CachePlistScheme:(id)a0;
- (void)tryNATCheckWithDelay:(double)a0;
- (unsigned int)setFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2 isCachedKey:(id)a3 mask:(unsigned int)a4;
- (void)updateNatTypeCache:(id)a0;
- (void)reportNATType;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(BOOL)a2;
- (void)shouldTryNATCheck;
- (id)copyNatTypeCache_OSXGamedScheme;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 ToServer:(id)a2 isSSL:(BOOL)a3;
- (void)clearRetries;
- (id)copyNatTypeCachePlistScheme;
- (void)setDelegate:(id)a0;
- (void)updateNatTypeCache_OSXGamedScheme:(id)a0;
- (void)NATCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(BOOL)a2;
- (unsigned int)setCommNATFlags:(unsigned int)a0 forInterface:(id)a1 isCached:(BOOL)a2;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0 ipv6Prefix:(const struct { int x0; unsigned char x1[12]; } *)a1 useCache:(BOOL)a2;
- (void)registerForNetworkChanges;
- (id)delegate;

@end
