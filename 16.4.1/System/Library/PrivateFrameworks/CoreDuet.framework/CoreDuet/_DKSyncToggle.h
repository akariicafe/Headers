@class NSString, NSObject;

@interface _DKSyncToggle : NSObject {
    BOOL _enabled;
    NSObject *_object;
    NSString *_name;
    SEL _enableSelector;
    SEL _disableSelector;
}

- (id)initWithObject:(id)a0 name:(id)a1 enableSelector:(SEL)a2 disableSelector:(SEL)a3;
- (void)_setEnabled:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
