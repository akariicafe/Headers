@class NSString;

@interface TSKCOOperationTransformHistoryEntry : NSObject {
    NSString *_originalOperationString;
    NSString *_transformingOperationString;
    NSString *_resultOperationString;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithOriginalOperation:(const struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; } *)a0 transformingOperation:(const struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; } *)a1;
- (BOOL)applyResult:(const struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; } *)a0;

@end
