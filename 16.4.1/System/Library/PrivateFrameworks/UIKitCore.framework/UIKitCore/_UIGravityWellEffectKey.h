@class NSString, UIView;

@interface _UIGravityWellEffectKey : NSObject <_UIContentEffectKey>

@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
