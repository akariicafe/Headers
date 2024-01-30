@class UIAction;

@interface UIControlTargetAction : NSObject {
    UIAction *_actionHandler;
    id _target;
    SEL _action;
    unsigned long long _eventMask;
}

@property (nonatomic) BOOL cancelled;

- (void).cxx_destruct;
- (id)description;

@end
