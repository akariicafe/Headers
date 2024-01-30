@class NSString, NSSet, NSMutableSet, BNSuspensionController, NSMutableArray;

@interface BNPenderQueue : NSObject <BNPresentableQueueDelegate, BNPending> {
    NSMutableArray *_penderQueue;
    NSMutableSet *_suspendedPenders;
    BNSuspensionController *_suspensionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *penderIdentifier;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, copy, nonatomic) NSSet *activeSuspensionReasons;

- (void).cxx_destruct;
- (void)enqueuePresentable:(id)a0 withOptions:(unsigned long long)a1 userInfo:(id)a2;
- (void)presentableQueue:(id)a0 didDequeuePresentableWithPendingIdentifier:(id)a1;
- (BOOL)setSuspended:(BOOL)a0 forReason:(id)a1;
- (id)_penderForRequesterWithIdentifier:(id)a0 creatingIfNecessary:(BOOL)a1;
- (BOOL)setPenderSuspended:(BOOL)a0 forRequesterWithIdentifier:(id)a1 reason:(id)a2;
- (id)peekPresentable;
- (id)pullPresentablesWithIdentification:(id)a0;

@end
