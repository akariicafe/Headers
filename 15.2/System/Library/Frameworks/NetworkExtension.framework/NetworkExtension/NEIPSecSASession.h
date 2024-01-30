@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, NEIPSecSASessionDelegate;

@interface NEIPSecSASession : NSObject

@property (retain) NSMutableArray *securityAssociations;
@property (retain) NSMutableArray *larvalSAs;
@property (nonatomic) unsigned long long uniqueIndex;
@property (retain) NSString *name;
@property (retain) NSObject<OS_dispatch_queue> *internalDelegateQueue;
@property (weak) NSObject<NEIPSecSASessionDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;

- (BOOL)addSA:(id)a0;
- (id)copyEmptySASession;
- (BOOL)migrateSA:(id)a0;
- (id)description;
- (BOOL)addLarvalSA:(id)a0;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void).cxx_destruct;
- (void)removeAllSAs;
- (void)invalidate;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (BOOL)updateSA:(id)a0;
- (BOOL)removeSA:(id)a0;

@end
