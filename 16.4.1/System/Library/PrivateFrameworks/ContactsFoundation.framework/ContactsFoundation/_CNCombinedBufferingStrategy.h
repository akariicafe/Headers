@class NSString, NSArray;

@interface _CNCombinedBufferingStrategy : NSObject <_CNBufferingStrategy> {
    NSArray *_strategies;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)buffer:(id)a0 didReceiveResults:(id)a1 forObserver:(id)a2;
- (void)bufferDidSendResults:(id)a0;
- (void)eachStrategy:(id /* block */)a0;
- (id)initWithStrategies:(id)a0;

@end
