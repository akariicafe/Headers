@class NSString;

@interface AVControlEventTargetAction : NSObject {
    id _target;
    SEL _action;
    NSString *_event;
    unsigned long long _parameterCount;
}

- (BOOL)hasMatchingEvent:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 event:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)sendAction:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
