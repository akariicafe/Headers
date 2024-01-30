@class NFCSession, NSArray, NSString, NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface NFCHardwareManager : NSObject <NFCSessionCallbacks, NFCHardwareManagerCallbacks> {
    NSHashTable *_delegates;
    NFCSession *_xpcSession;
    NSMutableDictionary *_queuedReaderSessions;
    NSObject<OS_dispatch_semaphore> *_hwSupportStateUpdate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerSessionLock;
}

@property (readonly, copy, nonatomic, getter=getDelegates) NSArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHardwareManager;

- (void)hwStateDidChange:(unsigned int)a0;
- (void)didInvalidate;
- (id)init;
- (void).cxx_destruct;
- (BOOL)areFeaturesSupported:(unsigned long long)a0 outError:(id *)a1;
- (void)addNFCHardwareManagerCallbacksListener:(id)a0;
- (void)areFeaturesSupported:(unsigned long long)a0 expiry:(double)a1 completion:(id /* block */)a2;
- (void)dequeueReaderSession:(id)a0;
- (id)getReaderSessionWithKey:(id)a0;
- (void)queueReaderSession:(id)a0 sessionConfig:(id)a1 completionHandler:(id /* block */)a2;

@end
