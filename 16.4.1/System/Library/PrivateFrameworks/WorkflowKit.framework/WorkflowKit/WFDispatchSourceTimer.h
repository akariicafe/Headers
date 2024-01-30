@class RBSAssertion, NSObject;
@protocol OS_dispatch_source;

@interface WFDispatchSourceTimer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source;
@property (retain, nonatomic) RBSAssertion *assertion;
@property (nonatomic) BOOL preventSuspension;

- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithInterval:(double)a0 repeatInterval:(double)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)initWithInterval:(double)a0 repeatIntervalInt:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
