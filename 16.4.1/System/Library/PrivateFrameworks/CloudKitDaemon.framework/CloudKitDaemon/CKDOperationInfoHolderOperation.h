@interface CKDOperationInfoHolderOperation : CKDOperation

@property (nonatomic) int operationType;

- (id)initWithOperationInfo:(id)a0 container:(id)a1 operationType:(int)a2;
- (void)main;
- (BOOL)shouldKeepXPCConnectionAlive;

@end
