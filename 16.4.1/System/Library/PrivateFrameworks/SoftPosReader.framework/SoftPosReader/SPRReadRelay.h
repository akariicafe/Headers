@class NSObject;
@protocol SPRReadDelegate, OS_dispatch_queue;

@interface SPRReadRelay : NSObject <SPRReadDelegate>

@property (readonly) id<SPRReadDelegate> base;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithBase:(id)a0 queue:(id)a1;
- (void)onFailureWithError:(id)a0;
- (void)onSuccessWithTransactionData:(id)a0;
- (void)onUpdateWithEvent:(long long)a0 mode:(long long)a1;

@end
