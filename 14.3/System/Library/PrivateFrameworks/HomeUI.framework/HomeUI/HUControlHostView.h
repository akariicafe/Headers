@class NSArray, UIView;

@interface HUControlHostView : UIView

@property (retain, nonatomic) NSArray *controlConstraints;
@property (nonatomic) BOOL requiresWellDefinedSize;
@property (retain, nonatomic) UIView *controlView;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithControlView:(id)a0;

@end
