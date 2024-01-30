@class NSObject, NSMutableSet, _UICompoundObjectMap;
@protocol OS_dispatch_queue;

@interface _UIViewAnimatablePropertyTransformer : NSObject {
    BOOL _presentationValueCallbackRan;
    NSObject<OS_dispatch_queue> *_lockingQueue;
}

@property (copy, nonatomic) id /* block */ modelValueChangedCallback;
@property (copy, nonatomic) id /* block */ presentationValueChangedCallback;
@property (copy, nonatomic) id /* block */ stabilizedCallback;
@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties;
@property (retain, nonatomic) NSMutableSet *runningProgresses;

- (void)performWithLock:(id /* block */)a0;
- (id)initWithInputAnimatableProperties:(id)a0 modelValueSetter:(id /* block */)a1 presentationValueSetter:(id /* block */)a2 stabilizedCallback:(id /* block */)a3 allowsProgressAnimatableProperties:(BOOL)a4;
- (id)initWithInputAnimatableProperties:(id)a0 modelValueSetter:(id /* block */)a1 presentationValueSetter:(id /* block */)a2;
- (id)initWithInputAnimatableProperties:(id)a0 presentationValueChangedCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithInputAnimatableProperties:(id)a0 modelValueSetter:(id /* block */)a1 presentationValueSetter:(id /* block */)a2 stabilizedCallback:(id /* block */)a3;
- (void)modelValueUpdatedForProgress:(id)a0;
- (id)initWithProgressAnimatableProperty:(id)a0 modelValueSetter:(id /* block */)a1 presentationValueSetter:(id /* block */)a2;
- (void)progressInvalidated:(id)a0;
- (void)presentationValueStabilizedForProgress:(id)a0;
- (void)presentationValueUpdatedForProgress:(id)a0;

@end
