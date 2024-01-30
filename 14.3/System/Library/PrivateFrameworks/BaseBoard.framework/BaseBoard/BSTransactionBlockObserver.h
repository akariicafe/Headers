@class NSString, NSMutableArray;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver> {
    NSMutableArray *_willBeginBlocks;
    NSMutableArray *_didBeginBlocks;
    NSMutableArray *_didFinishWorkBlocks;
    NSMutableArray *_didCompleteBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transactionDidComplete:(id)a0;
- (void)transactionDidBegin:(id)a0;
- (void).cxx_destruct;
- (void)addTransactionDidCompleteBlock:(id /* block */)a0;
- (void)transactionDidFinishWork:(id)a0;
- (void)transactionWillBegin:(id)a0;
- (void)addTransactionDidFinishWorkBlock:(id /* block */)a0;
- (void)addTransactionWillBeginBlock:(id /* block */)a0;
- (void)addTransactionDidBeginBlock:(id /* block */)a0;

@end
