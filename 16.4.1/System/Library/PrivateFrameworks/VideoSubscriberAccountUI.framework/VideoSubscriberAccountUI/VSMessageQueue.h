@class NSMutableArray;
@protocol VSMessageQueueDelegate;

@interface VSMessageQueue : NSObject

@property (retain, nonatomic) NSMutableArray *messages;
@property (weak, nonatomic) id<VSMessageQueueDelegate> delegate;

- (void)addMessage:(id)a0;
- (id)removeAllMessages;
- (id)init;
- (void).cxx_destruct;

@end
