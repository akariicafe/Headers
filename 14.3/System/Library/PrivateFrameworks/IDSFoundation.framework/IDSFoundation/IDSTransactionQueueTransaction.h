@interface IDSTransactionQueueTransaction : NSObject

@property (nonatomic) BOOL readyToExecute;
@property (retain, nonatomic) id item;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 readyToExecute:(BOOL)a1;

@end
