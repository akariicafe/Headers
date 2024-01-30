@class NSObject, MTPromise, NSDate;
@protocol OS_dispatch_source;

@interface MTPromiseWithTimeout : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) MTPromise *promise;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceTimer;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0;
- (void)dealloc;
- (id)initWithTimeout:(double)a0 queue:(id)a1 timeoutBlock:(id /* block */)a2;

@end
