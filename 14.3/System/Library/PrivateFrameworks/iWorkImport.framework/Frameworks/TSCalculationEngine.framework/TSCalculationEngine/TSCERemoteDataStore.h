@class TSCERemoteDataValueMap, TSCECalculationEngine, NSMutableDictionary, TSCERemoteDataSpecifierSet, NSOperationQueue, NSMutableSet, TSCERemoteDataCoordinator, NSObject;
@protocol OS_dispatch_queue, TSCERemoteDataStoreDelegate, OS_dispatch_semaphore;

@interface TSCERemoteDataStore : TSPObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSOperationQueue *updateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *tspSemaphore;
@property (readonly, nonatomic) TSCERemoteDataCoordinator *coordinator;
@property (readonly, nonatomic) TSCERemoteDataValueMap *remoteDataMap;
@property (readonly, nonatomic) NSMutableDictionary *cachedStocks;
@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *interestingKeys;
@property (nonatomic) BOOL hasInterestingKeys;
@property (readonly, nonatomic) NSMutableDictionary *ownerMap;
@property (nonatomic) BOOL registeredWithCoordinator;
@property (nonatomic) double remoteDataSyncKey;
@property (retain, nonatomic) NSMutableSet *unSyncedStocks;
@property (readonly, nonatomic) BOOL hasArchivableState;
@property (readonly, nonatomic) BOOL hasFullyPopulatedCache;
@property (weak, nonatomic) id<TSCERemoteDataStoreDelegate> delegate;
@property (weak, nonatomic) TSCECalculationEngine *calculationEngine;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)unregisterWithCoordinator;
- (struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; })valueForRemoteData:(id)a0;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1;
- (void)updateCachedStocksIntoStore:(id)a0;
- (void)remoteDataDidUpdateValues:(id)a0 quotes:(id)a1;
- (void)p_initializeQueue;
- (void)p_recursiveWriteWillModify:(BOOL)a0 withBlock:(id /* block */)a1;
- (struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; })p_tsceValueFromTsceCellValue:(id)a0;
- (BOOL)p_isInCollaborationMode;
- (id)p_updateCachesWithMap:(id)a0 quotes:(id)a1 overwriteValues:(BOOL)a2;
- (void)updateCachedStocksFromKnownStocks:(id)a0;
- (void)registerWithCoordinator;
- (id)cachedQuoteForSymbol:(id)a0;
- (void)addRemoteDataInterest:(id)a0 forOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (void)removeRemoteDataInterest:(id)a0 forOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (id)allRemoteData;
- (id)allQuotes;
- (id)p_dictionaryForRemoteData:(id)a0;
- (void)updateWithRemoteDataMap:(id)a0 quotes:(id)a1 syncKey:(double)a2;

@end
