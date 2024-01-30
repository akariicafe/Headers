@interface NEIPSecSAKernelSession : NEIPSecSASession

@property (nonatomic) struct NEIPSecDB_s { } *internalSession;

- (void)setDelegateQueue:(id)a0;
- (BOOL)addSA:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 delegate:(id)a1 pfkeySocket:(int)a2;
- (BOOL)migrateSA:(id)a0;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (void)invalidate;
- (BOOL)updateSA:(id)a0;
- (BOOL)removeSA:(id)a0;
- (BOOL)addLarvalSA:(id)a0;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)removeAllSAs;

@end
