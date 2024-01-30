@class NSString, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, NEIPSecSASessionDelegate;

@interface NEIPSecSASession : NSObject {
    NSString *_name;
    NSMutableArray *_securityAssociations;
    NSMutableArray *_larvalSAs;
    unsigned long long _uniqueIndex;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
}

@property (readonly) NSString *name;
@property (weak) NSObject<NEIPSecSASessionDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSArray *securityAssociations;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (BOOL)addLarvalSA:(id)a0;
- (BOOL)addSA:(id)a0;
- (id)copyEmptySASession;
- (BOOL)migrateSA:(id)a0;
- (void)removeAllSAs;
- (BOOL)removeSA:(id)a0;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (BOOL)updateSA:(id)a0;

@end
