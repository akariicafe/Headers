@class UIScreen, UIColor, UITraitCollection;

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying>

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) UIColor *tintColor;

- (void)_collectStateFromVisualStyleViewState:(id)a0;
- (BOOL)_stateEqualToVisualStyleViewState:(id)a0;
- (id)description;
- (id)initWithPropertiesFromTopLevelView:(id)a0;
- (id)copyWithTraitCollection:(id)a0;
- (void)_collectStateFromScreen:(id)a0;
- (id)copyWithScreen:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_collectStateFromView:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
