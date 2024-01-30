@class NSArray, NSDictionary;

@interface DDOperation : NSOperation <NSCopying> {
    struct __DDScanQuery { } *_query;
    int _containerNotReadyTryCount;
    long long _jobIdentifier;
}

@property (retain, nonatomic) id container;
@property BOOL needContinuation;
@property (retain, nonatomic) NSArray *results;
@property int generationNumber;
@property int tryCount;
@property (nonatomic) unsigned long long detectionTypes;
@property (nonatomic) BOOL ignoreSignatures;
@property BOOL isDiscarded;
@property (retain, nonatomic) NSDictionary *context;

+ (id /* block */)shouldUrlifyBlockForTypes:(unsigned long long)a0;
+ (BOOL)_needsFullScannerForDetectionTypes:(unsigned long long)a0;
+ (id /* block */)urlificationBlockForTypes:(unsigned long long)a0;

- (id)initWithContainer:(id)a0;
- (void)cleanup;
- (void)main;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)cancel;
- (void)dispatchScanQueryCreationWithCompletionBlock:(id /* block */)a0;
- (void)dispatchContainerModificationBlock:(id /* block */)a0;
- (BOOL)needsFullScanner;
- (BOOL)containerIsReady;
- (BOOL)needsToStartOver;
- (BOOL)doURLificationOnDocument;
- (struct __DDScanQuery { } *)scanQuery;
- (id)newOperationForStartingOver;
- (id)newOperationForContinuation;
- (void)_applyContainerRestrictionsToTypes;
- (BOOL)_containerReadyForDetection;
- (void)_updateGenerationNumber;
- (BOOL)_rangeValidForContainer;
- (struct __DDScanQuery { } *)_createScanQueryForBackend;
- (void)_setScanQuery:(struct __DDScanQuery { } *)a0;
- (int)_createScanQuery;

@end
