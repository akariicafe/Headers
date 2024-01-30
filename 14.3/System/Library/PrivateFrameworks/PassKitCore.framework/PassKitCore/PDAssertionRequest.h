@class NSObject, PDAssertion;
@protocol OS_dispatch_source;

@interface PDAssertionRequest : NSObject

@property (retain, nonatomic) PDAssertion *assertion;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *invalidationTimer;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)a0 delegate:(id)a1 resultHandler:(id /* block */)a2;

@end
