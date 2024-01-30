@class NPSManager;

@interface NPHNanoRespondWithTextStoreCompanionReplication : NSObject {
    NPSManager *_npsManager;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_replyWithMessageStoreDidChange;

@end
