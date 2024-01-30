@class NSString, CPLEngineStore, CPLPlatformObject;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {
    BOOL _superWasCalled;
}

@property (readonly, nonatomic) CPLEngineStore *engineStore;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long scopeType;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformImplementationProtocol;

- (BOOL)openWithError:(id *)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)closeWithError:(id *)a0;
- (id)status;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (id)statusDictionary;
- (void)transactionDidFinish;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)statusPerScopeIndex;
- (BOOL)_checkSuperWasCalled;

@end
