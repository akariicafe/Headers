@class UIView;

@interface UIInputViewAnimationStyleExtraView : NSObject

@property (nonatomic) int clipContainerType;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) int alignment;
@property (copy, nonatomic) id /* block */ animation;

+ (id)extraView:(id)a0 withAlignment:(int)a1 animation:(id /* block */)a2 onSnapshot:(BOOL)a3;

- (void)dealloc;

@end
