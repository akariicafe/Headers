@class NSArray, NSString, _GCGamepadEventKeyboardEventAdapterConfig;

@interface _GCGamepadEventKeyboardEventAdapter : NSObject <_GCGamepadEventSource> {
    id _observation;
    _GCGamepadEventKeyboardEventAdapterConfig *_config;
}

@property (copy) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)observeGamepadEvents:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 source:(id)a1;

@end
