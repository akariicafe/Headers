@class NSString, NSObject;
@protocol AVKVOIntrospection, AVCallbackCancellation;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation> {
    NSObject *_observedObject;
    id<AVKVOIntrospection, AVCallbackCancellation> _realNotifier;
}

@property (readonly, nonatomic) NSObject *observedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancelCallbacks;
- (id)initWithObservedObject:(id)a0 realNotifier:(id)a1;

@end
