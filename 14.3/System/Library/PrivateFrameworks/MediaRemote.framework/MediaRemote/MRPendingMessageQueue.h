@class NSMutableArray;

@interface MRPendingMessageQueue : NSObject {
    NSMutableArray *_messages;
    NSMutableArray *_delayableMessages;
    unsigned long long _lowPriorityMessagesCount;
    unsigned long long _maxLowPriorityMessagesAllowed;
}

- (void)push:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pop;
- (id)peek;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)a0;

@end
