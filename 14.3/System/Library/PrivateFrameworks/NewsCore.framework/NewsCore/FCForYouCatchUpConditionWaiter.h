@class NFUnfairLock, NSString, NSError, NSObject, FCForYouCatchUpCondition;
@protocol OS_dispatch_group;

@interface FCForYouCatchUpConditionWaiter : NSObject <FCOperationCanceling> {
    NFUnfairLock *_lock;
    NSObject<OS_dispatch_group> *_group;
    BOOL _finished;
    NSError *_error;
}

@property (retain, nonatomic) FCForYouCatchUpCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)notifyWithCompletion:(id /* block */)a0;
- (void)signalWithError:(id)a0;
- (void)_possiblyFinishWithError:(id)a0;

@end
