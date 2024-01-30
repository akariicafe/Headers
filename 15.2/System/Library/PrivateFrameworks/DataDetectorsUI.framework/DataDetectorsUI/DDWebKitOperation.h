@class DOMNode, WebFrame;

@interface DDWebKitOperation : DDOperation

@property (retain, nonatomic) DOMNode *startNode;
@property int startOffset;
@property (retain, nonatomic) DOMNode *endNode;
@property int endOffset;
@property (retain, nonatomic) WebFrame *container;

- (void)cleanup;
- (void).cxx_destruct;
- (void)dispatchContainerModificationBlock:(id /* block */)a0;
- (BOOL)containerIsReady;
- (BOOL)needsToStartOver;
- (BOOL)doURLificationOnDocument;
- (id)newOperationForStartingOver;
- (id)newOperationForContinuation;
- (void)_applyContainerRestrictionsToTypes;
- (BOOL)_containerReadyForDetection;
- (void)_updateGenerationNumber;
- (BOOL)_rangeValidForContainer;
- (struct __DDScanQuery { } *)_createScanQueryForBackend;

@end
