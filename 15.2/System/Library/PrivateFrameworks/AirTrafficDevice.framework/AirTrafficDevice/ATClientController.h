@class NSDictionary;

@interface ATClientController : NSObject {
    NSDictionary *_clientMap;
    struct __CFDictionary { } *_queueMap;
}

+ (id)sharedInstance;
+ (id)controllerForDataclasses:(id)a0;

- (id)allClients;
- (id)clientForDataclass:(id)a0;
- (void)resetQueues;
- (id)queueForClient:(id)a0;
- (void).cxx_destruct;
- (void)waitToDrain;
- (void)dealloc;
- (BOOL)_loadClientsForDataclasses:(id)a0;

@end
