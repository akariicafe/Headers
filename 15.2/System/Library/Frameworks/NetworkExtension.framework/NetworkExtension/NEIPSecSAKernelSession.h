@interface NEIPSecSAKernelSession : NEIPSecSASession

@property (nonatomic) struct NEIPSecDB_s { } *internalSession;

- (BOOL)addSA:(id)a0;
- (void)setDelegateQueue:(id)a0;
- (id)initWithName:(id)a0 delegate:(id)a1 pfkeySocket:(int)a2;
- (BOOL)migrateSA:(id)a0;
- (id)description;
- (BOOL)addLarvalSA:(id)a0;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)removeAllSAs;
- (void)invalidate;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (BOOL)updateSA:(id)a0;
- (BOOL)removeSA:(id)a0;

@end
