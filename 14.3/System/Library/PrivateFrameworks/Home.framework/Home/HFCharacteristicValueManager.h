@class NSString, NSRecursiveLock, HFCharacteristicValueCacheManager, NAIdentity, NSMutableDictionary, NACancelationToken, NSSet, HFCharacteristicValueTransaction, NSMutableSet, NSMutableArray, HFCharacteristicReadLogger, NAFuture;
@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueReader, HFCharacteristicValueWriter;

@interface HFCharacteristicValueManager : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<HFCharacteristicValueReader> valueReader;
@property (retain, nonatomic) id<HFCharacteristicValueWriter> valueWriter;
@property (nonatomic) long long _debug_totalNumberOfIssuedBatchReadRequests;
@property (retain, nonatomic) HFCharacteristicValueTransaction *openTransaction;
@property (retain, nonatomic) NSMutableArray *runningTransactions;
@property (retain, nonatomic) NSMutableArray *readTransactionsToExecuteOnNextRunLoop;
@property (retain, nonatomic) NSMutableArray *completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
@property (retain, nonatomic) NSRecursiveLock *transactionLock;
@property (retain, nonatomic) NSMutableSet *mutableAllReadCharacteristics;
@property (retain, nonatomic) NSMutableSet *characteristicsWithCachedValues;
@property (retain, nonatomic) NSMutableDictionary *cachedReadErrorsKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedWriteErrorsKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedExecutionErrorsKeyedByActionSetIdentifier;
@property (retain, nonatomic) HFCharacteristicValueCacheManager *cacheManager;
@property (retain, nonatomic) NACancelationToken *inFlightReadCancelationToken;
@property (retain, nonatomic) HFCharacteristicReadLogger *readsCompleteLogger;
@property (readonly, nonatomic) NAFuture *firstReadCompleteFuture;
@property (readonly, copy, nonatomic) NSSet *allReadCharacteristics;
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingReads;
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingWrites;
@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldTrackReadsCompleteForPerformanceTesting;

- (void)executeActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)readValueForCharacteristic:(id)a0;
- (id)readValuesForCharacteristics:(id)a0;
- (id)writeValuesForCharacteristics:(id)a0;
- (void)beginTransactionWithReason:(id)a0 readPolicy:(id)a1 logger:(id)a2;
- (void)commitTransactionWithReason:(id)a0;
- (id)_transactionLock_characteristicsWithPendingWritesInTransacton:(id)a0 includeDirectWrites:(BOOL)a1 includeActionSets:(BOOL)a2 includeActions:(BOOL)a3;
- (id)cachedValueForCharacteristic:(id)a0;
- (id)cachedReadErrorForCharacteristic:(id)a0;
- (void)beginTransactionWithReason:(id)a0;
- (id)executeActionSet:(id)a0;
- (void)_transactionLock_executeWriteTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_transactionLock_executeActionSetTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_transactionLock_executeActionsTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_transactionLock_executeReadTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (id)readValuesForCharacteristicTypes:(id)a0 inServices:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)_beginReadsCompleteTrackingForCharacteristics:(id)a0 withLogger:(id)a1;
- (void)_endReadsCompleteTrackingForCharacteristic:(id)a0 withLogger:(id)a1 didRead:(BOOL)a2;
- (BOOL)isNaturalLightingSupportedForProfile:(id)a0;
- (BOOL)isNaturalLightingEnabledForProfile:(id)a0;
- (id)writeNaturalLightEnabledState:(BOOL)a0 forProfile:(id)a1;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)a0 lightProfile:(id)a1 completion:(id /* block */)a2;
- (id)readValuesForCharacteristicsPassingTest:(id /* block */)a0 inServices:(id)a1;
- (id)writeValue:(id)a0 forCharacteristic:(id)a1;
- (id)cachedErrorForExecutionOfActionSet:(id)a0;
- (id)cachedErrorForWriteToCharacteristic:(id)a0;
- (id)initWithValueReader:(id)a0 valueWriter:(id)a1;
- (unsigned long long)loadingStateForCharacteristics:(id)a0 actionSets:(id)a1;
- (id)executeActions:(id)a0;
- (id)_openTransactionCompletionFuture;
- (BOOL)hasCachedReadErrorForAccessory:(id)a0 passingTest:(id /* block */)a1;
- (void)invalidateCachedValueForCharacteristic:(id)a0;
- (void)invalidateCachedValuesForAccessory:(id)a0;
- (void)invalidateCachedErrorForExecutionOfActionSet:(id)a0;
- (void)invalidateAllCachedErrors;
- (void)cancelInFlightReadRequests;

@end
