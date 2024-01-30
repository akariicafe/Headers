@interface NEIPSecSAKernelSession : NEIPSecSASession {
    struct NEIPSecDB_s { } *_internalSession;
}

- (void)setDelegateQueue:(id)a0;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (BOOL)addLarvalSA:(id)a0;
- (BOOL)addSA:(id)a0;
- (id)initWithName:(id)a0 delegate:(id)a1 pfkeySocket:(int)a2;
- (BOOL)migrateSA:(id)a0;
- (void)removeAllSAs;
- (BOOL)removeSA:(id)a0;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (BOOL)updateSA:(id)a0;

@end
