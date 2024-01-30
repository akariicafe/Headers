@class NSString;

@interface PSEventBlockInvocation : NSObject <PSEventInvocation> {
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)invokeWithEvent:(id)a0 forTopicWithName:(id)a1;

@end
