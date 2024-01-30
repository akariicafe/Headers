@class NSString;

@interface _GCGamepadEventHID : NSObject <_GCGamepadEvent> {
    struct __IOHIDEvent { } *_extendedEvent;
}

@property (readonly, nonatomic) struct __IOHIDEvent { } *event;
@property (readonly) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithHIDEvent:(struct __IOHIDEvent { } *)a0;
- (float)floatValueForElement:(long long)a0;
- (BOOL)hasValidValueForElement:(long long)a0;

@end
