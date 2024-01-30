@class NSString;

@interface TSKCOOperationTransformHistoryEntry : NSObject {
    NSString *_originalOperationString;
    NSString *_transformingOperationString;
    NSString *_resultOperationString;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithOriginalOperation:(const void *)a0 transformingOperation:(const void *)a1;
- (BOOL)applyResult:(const void *)a0;

@end
