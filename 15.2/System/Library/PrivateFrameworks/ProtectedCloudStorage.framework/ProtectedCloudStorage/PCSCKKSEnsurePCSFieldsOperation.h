@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (id)initWithItemModifyContext:(id)a0;
- (BOOL)haveCKKSPlaintextEntitlements;
- (void)start;
- (void).cxx_destruct;
- (int)updateKeychain:(id)a0 withAttributes:(id)a1;

@end
