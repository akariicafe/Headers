@class NPKOSTransaction;

@interface NPKWorkQueueItem : NSObject

@property (readonly, nonatomic) NPKOSTransaction *transaction;
@property (readonly, nonatomic) id /* block */ workBlock;

+ (id)itemWithTransaction:(id)a0 work:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0 work:(id /* block */)a1;

@end
