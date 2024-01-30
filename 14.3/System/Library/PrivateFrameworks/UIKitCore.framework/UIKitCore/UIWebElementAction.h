@class NSString;

@interface UIWebElementAction : NSObject {
    NSString *_title;
    id /* block */ _actionHandler;
}

@property (readonly, nonatomic) int type;
@property (copy, nonatomic) id /* block */ dismissalHandler;

+ (id)customElementActionWithTitle:(id)a0 actionHandler:(id /* block */)a1;
+ (id)standardElementActionWithType:(int)a0 customTitle:(id)a1 context:(id)a2;
+ (id)standardElementActionWithType:(int)a0;

- (id)initWithTitle:(id)a0 actionHandler:(id /* block */)a1 type:(int)a2;
- (void)_runActionWithElement:(id)a0 targetURL:(id)a1 documentView:(id)a2 interactionLocation:(struct CGPoint { double x0; double x1; })a3;
- (void)dealloc;
- (id)_title;

@end
