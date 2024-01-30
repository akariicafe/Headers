@class NSMutableArray;
@protocol VSMessageQueueDelegate;

@interface VSMessageQueue : NSObject

@property (retain, nonatomic) NSMutableArray *messages;
@property (weak, nonatomic) id<VSMessageQueueDelegate> delegate;

- (id)removeAllMessages;
- (void).cxx_destruct;
- (id)init;
- (void)addMessage:(id)a0;

@end
