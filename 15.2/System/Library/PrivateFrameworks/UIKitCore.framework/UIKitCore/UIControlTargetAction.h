@class UIAction;

@interface UIControlTargetAction : NSObject {
    UIAction *_actionHandler;
    id _target;
    SEL _action;
    unsigned long long _eventMask;
}

@property (nonatomic) BOOL cancelled;

- (id)description;
- (void).cxx_destruct;

@end
