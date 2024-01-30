@class NSString, NSNumber, NSObject;
@protocol NFTag, OS_dispatch_queue;

@interface NFCNDEFTag : NSObject <NFCNDEFTag> {
    id<NFTag> _tag;
    NSNumber *_sessionKey;
    BOOL _writeLocked;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDelegateQueue:(id)a0;
- (void)_setSession:(id)a0;
- (void)_connectWithCompletionHandler:(id /* block */)a0;
- (void)queryNDEFStatusWithCompletionHandler:(id /* block */)a0;
- (void)readNDEFWithCompletionHandler:(id /* block */)a0;
- (void)writeNDEF:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeLockWithCompletionHandler:(id /* block */)a0;
- (id)initWithSession:(id)a0 tag:(id)a1 startupConfig:(long long)a2;
- (id)_getInternalReaderSession;
- (void)_setTag:(id)a0;
- (BOOL)_disconnectWithError:(id *)a0;
- (BOOL)isMatchingSession:(id)a0 outError:(id *)a1;
- (void)dispatchBlockOnDelegateQueueAsync:(id /* block */)a0;
- (void)_updateNdefStatusWithSession:(id)a0;
- (BOOL)_connectWithError:(id *)a0;

@end
