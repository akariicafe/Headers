@class NSString;

@interface PSEventSelectorInvocation : NSObject <PSEventInvocation> {
    id _receiver;
    SEL _selector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invokeWithEvent:(id)a0 forTopicWithName:(id)a1;
- (id)initWithReceiver:(id)a0 selector:(SEL)a1;

@end
