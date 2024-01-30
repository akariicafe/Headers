@class NSMutableDictionary;

@interface ASMessageQueue : NSObject {
    NSMutableDictionary *_identifierToMessageDictionary;
    struct __CFString { } *_domainName;
    struct __CFString { } *_queueName;
}

- (id)initWithQueueName:(id)a0;
- (void)_synchronizePreferences;
- (void)dealloc;
- (void)removeMessageWithIdentifier:(id)a0;
- (id)init;
- (id)messageWithIdentifier:(id)a0;
- (void)setMessage:(id)a0 identifier:(id)a1;
- (void)enumerateQueuedMessagesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
