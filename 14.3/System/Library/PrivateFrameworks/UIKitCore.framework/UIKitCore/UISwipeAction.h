@class UIColor, UIImage, UIVisualEffect;

@interface UISwipeAction : UIContextualAction

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) UIVisualEffect *backgroundEffect;
@property (nonatomic) BOOL canBeTriggeredBySwipe;
@property (nonatomic) BOOL resetsSwipedRow;

+ (id)swipeActionWithStyle:(long long)a0 title:(id)a1 handler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)resetSwipedRow;

@end
