@class NSObject;
@protocol OS_dispatch_queue, BUCountingAssertionProviderDelegate;

@interface BUCountingAssertionProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _count;
    id<BUCountingAssertionProviderDelegate> _delegate;
}

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)_endAssertion;
- (id)_newAssertion:(BOOL)a0;
- (id)newAssertion;
- (id)newExtendingAssertion;

@end
