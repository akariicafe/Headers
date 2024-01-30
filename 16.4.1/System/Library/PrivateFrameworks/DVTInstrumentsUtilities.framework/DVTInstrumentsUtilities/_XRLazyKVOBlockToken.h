@class NSString;

@interface _XRLazyKVOBlockToken : NSObject <XRLazyKVOResponder> {
    id _object;
    id _observer;
}

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleLazyKVOUpdate:(id)a0;
- (id)initWithObject:(id)a0 observer:(id)a1;

@end
