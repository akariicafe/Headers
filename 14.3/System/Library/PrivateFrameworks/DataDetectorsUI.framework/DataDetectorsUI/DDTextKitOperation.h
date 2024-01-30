@class UITextView;

@interface DDTextKitOperation : DDOperation {
    int _editCount;
}

@property (retain, nonatomic) UITextView *container;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void)cleanup;
- (void)textDidChange:(id)a0;
- (id)initWithContainer:(id)a0;
- (void)dispatchContainerModificationBlock:(id /* block */)a0;
- (BOOL)needsToStartOver;
- (BOOL)doURLificationOnDocument;
- (id)newOperationForStartingOver;
- (id)newOperationForContinuation;
- (void)_updateGenerationNumber;
- (BOOL)_rangeValidForContainer;
- (struct __DDScanQuery { } *)_createScanQueryForBackend;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_addResultToAttributes:(id)a0 inStorage:(id)a1 editing:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_addResultsToAttributesInStorage:(id)a0;

@end
