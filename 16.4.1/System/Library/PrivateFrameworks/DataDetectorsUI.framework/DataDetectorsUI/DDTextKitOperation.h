@class UITextView;

@interface DDTextKitOperation : DDOperation {
    int _editCount;
}

@property (retain, nonatomic) UITextView *container;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void)cleanup;
- (id)initWithContainer:(id)a0;
- (void)textDidChange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_addResultToAttributes:(id)a0 inStorage:(id)a1 editing:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_addResultsToAttributesInStorage:(id)a0;
- (struct __DDScanQuery { } *)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (void)dispatchContainerModificationBlock:(id /* block */)a0;
- (BOOL)doURLificationOnDocument;
- (BOOL)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;

@end
