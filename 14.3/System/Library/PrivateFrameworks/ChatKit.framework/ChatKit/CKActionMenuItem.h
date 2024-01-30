@class UILabel, UIView;
@protocol CKActionMenuItemView;

@interface CKActionMenuItem : NSObject

@property (retain, nonatomic) UIView<CKActionMenuItemView> *view;
@property (retain, nonatomic) UILabel<CKActionMenuItemView> *label;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)itemWithImageTemplate:(id)a0 tintColor:(id)a1 highlightedTintColor:(id)a2 target:(id)a3 action:(SEL)a4;
+ (void)animate:(id /* block */)a0 completion:(id /* block */)a1;

- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithView:(id)a0 label:(id)a1 target:(id)a2 action:(SEL)a3;
- (id)init;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)sendAction;
- (id)description;
- (void)updateForState:(long long)a0 touchInside:(BOOL)a1;

@end
