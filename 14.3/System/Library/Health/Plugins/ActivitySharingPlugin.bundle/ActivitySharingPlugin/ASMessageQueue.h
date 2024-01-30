@class NSMutableDictionary;

@interface ASMessageQueue : NSObject {
    NSMutableDictionary *_identifierToMessageDictionary;
    struct __CFString { } *_domainName;
    struct __CFString { } *_queueName;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueueName:(id)a0;
- (void)dealloc;
- (void)_synchronizePreferences;
- (id)messageWithIdentifier:(id)a0;
- (void)enumerateQueuedMessagesUsingBlock:(id /* block */)a0;
- (void)setMessage:(id)a0 identifier:(id)a1;
- (void)removeMessageWithIdentifier:(id)a0;

@end
