@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (void)start;
- (id)initWithItemModifyContext:(id)a0;
- (BOOL)haveCKKSPlaintextEntitlements;
- (int)updateKeychain:(id)a0 withAttributes:(id)a1;

@end
