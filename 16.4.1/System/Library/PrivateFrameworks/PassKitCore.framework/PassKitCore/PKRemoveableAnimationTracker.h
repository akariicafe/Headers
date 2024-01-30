@class CALayer, NSString;

@interface PKRemoveableAnimationTracker : NSObject {
    BOOL _removed;
    BOOL _finished;
    BOOL _tracked;
    BOOL _preemptAttempted;
    id /* block */ _preemptAction;
}

@property (readonly, weak, nonatomic) CALayer *layer;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)createForAnimation:(id)a0 inLayer:(id)a1 store:(id)a2;
+ (id)createForAnimation:(id)a0 inLayer:(id)a1 store:(id)a2 withPreemptAction:(id /* block */)a3;
+ (id)createForAnimation:(id)a0 inLayer:(id)a1 store:(id)a2 withPreemptAction:(id /* block */)a3 completionAction:(id /* block */)a4;

- (void)remove;
- (id)init;
- (void).cxx_destruct;
- (void)preempt;

@end
