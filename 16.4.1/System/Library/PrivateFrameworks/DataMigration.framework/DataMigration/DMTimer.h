@class NSObject;
@protocol OS_dispatch_source;

@interface DMTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) id /* block */ fireBlock;
@property (nonatomic) unsigned long long secondsBeforeFirstFire;
@property (nonatomic) unsigned long long secondsOfLeeway;

- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (void)cancelSynchronously;
- (id)initWithSecondsBeforeFirstFire:(unsigned long long)a0 secondsOfLeeway:(unsigned long long)a1 fireBlock:(id /* block */)a2;

@end
