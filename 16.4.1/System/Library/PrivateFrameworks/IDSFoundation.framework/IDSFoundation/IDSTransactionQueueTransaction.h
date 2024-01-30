@interface IDSTransactionQueueTransaction : NSObject

@property (nonatomic) BOOL readyToExecute;
@property (retain, nonatomic) id item;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (id)initWithItem:(id)a0 readyToExecute:(BOOL)a1;

@end
