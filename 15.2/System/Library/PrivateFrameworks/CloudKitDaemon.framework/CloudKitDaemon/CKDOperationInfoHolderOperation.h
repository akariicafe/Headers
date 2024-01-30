@interface CKDOperationInfoHolderOperation : CKDOperation

@property (nonatomic) int operationType;

- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1 operationType:(int)a2;
- (BOOL)shouldKeepXPCConnectionAlive;

@end
