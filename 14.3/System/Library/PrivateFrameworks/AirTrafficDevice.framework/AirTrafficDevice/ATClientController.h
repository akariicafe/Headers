@class NSDictionary;

@interface ATClientController : NSObject {
    NSDictionary *_clientMap;
    struct __CFDictionary { } *_queueMap;
}

+ (id)sharedInstance;
+ (id)controllerForDataclasses:(id)a0;

- (id)allClients;
- (void).cxx_destruct;
- (void)resetQueues;
- (void)dealloc;
- (id)queueForClient:(id)a0;
- (id)clientForDataclass:(id)a0;
- (BOOL)_loadClientsForDataclasses:(id)a0;
- (void)waitToDrain;

@end
