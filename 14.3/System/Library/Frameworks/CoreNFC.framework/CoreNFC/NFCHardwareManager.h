@class NFCSession, NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface NFCHardwareManager : NSObject <NFCSessionCallbacks, NFCHardwareManagerCallbacks> {
    NSMutableArray *_delegates;
    NFCSession *_xpcSession;
    NSMutableDictionary *_queuedReaderSessions;
}

@property (readonly, copy, nonatomic, getter=getDelegates) NSArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHardwareManager;

- (void)didInvalidate;
- (id)init;
- (void).cxx_destruct;
- (BOOL)areFeaturesSupported:(unsigned long long)a0 outError:(id *)a1;
- (void)hardwareFailedToLoad;
- (id)getReaderSessionWithKey:(id)a0;
- (void)removeNFCHardwareManagerCallbacksListener:(id)a0;
- (void)dequeueReaderSession:(id)a0;
- (void)addNFCHardwareManagerCallbacksListener:(id)a0;
- (void)queueReaderSession:(id)a0 sessionConfig:(id)a1 completionHandler:(id /* block */)a2;

@end
