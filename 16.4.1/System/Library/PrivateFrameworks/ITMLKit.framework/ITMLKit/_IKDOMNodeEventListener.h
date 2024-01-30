@class JSManagedValue;

@interface _IKDOMNodeEventListener : NSObject

@property (retain, nonatomic) JSManagedValue *managedValue;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)value;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0 forNode:(id)a1;

@end
