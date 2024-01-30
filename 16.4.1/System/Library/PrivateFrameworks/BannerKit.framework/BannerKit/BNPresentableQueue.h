@class NSString, NSSet, NSMapTable, BNSuspensionController, NSMutableArray;
@protocol BNPresentableQueueDelegate;

@interface BNPresentableQueue : NSObject <BNPending> {
    NSMutableArray *_postingContextQueue;
    NSMapTable *_postingContextsToDequeuePromises;
    BNSuspensionController *_suspensionController;
}

@property (weak, nonatomic) id<BNPresentableQueueDelegate> delegate;
@property (copy, nonatomic) NSString *penderIdentifier;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, copy, nonatomic) NSSet *activeSuspensionReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)setSuspended:(BOOL)a0 forReason:(id)a1;
- (id)peekPresentable;
- (id)pullPresentablesWithIdentification:(id)a0;
- (void)enqueuePresentable:(id)a0 withOptions:(unsigned long long)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)_pullPresentablesPassingTest:(id /* block */)a0;

@end
