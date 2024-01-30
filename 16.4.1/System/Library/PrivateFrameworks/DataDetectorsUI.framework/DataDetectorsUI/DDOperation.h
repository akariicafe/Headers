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

- (void)cleanup;
- (id)initWithContainer:(id)a0;
- (void)main;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_applyContainerRestrictionsToTypes;
- (BOOL)_containerReadyForDetection;
- (int)_createScanQuery;
- (struct __DDScanQuery { } *)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_setScanQuery:(struct __DDScanQuery { } *)a0;
- (void)_updateGenerationNumber;
- (BOOL)containerIsReady;
- (void)dispatchContainerModificationBlock:(id /* block */)a0;
- (void)dispatchScanQueryCreationWithCompletionBlock:(id /* block */)a0;
- (BOOL)doURLificationOnDocument;
- (BOOL)needsFullScanner;
- (BOOL)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (struct __DDScanQuery { } *)scanQuery;

@end
