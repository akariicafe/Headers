@class NSObject;
@protocol OS_dispatch_queue, BUCountingAssertionProviderDelegate;

@interface BUCountingAssertionProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _count;
    id<BUCountingAssertionProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)_beginAssertion;
- (BOOL)_endAssertion;
- (id)newAssertion;

@end
