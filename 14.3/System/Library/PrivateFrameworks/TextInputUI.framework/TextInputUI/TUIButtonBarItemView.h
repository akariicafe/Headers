@class UIBarButtonItemGroup, _UIButtonBarButton, UIView, UIBarButtonItem;

@interface TUIButtonBarItemView : UIView

@property (nonatomic, getter=isCollapsedItem) BOOL collapsedItem;
@property (retain, nonatomic) UIBarButtonItem *associatedItem;
@property (retain, nonatomic) UIBarButtonItemGroup *associatedGroup;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) _UIButtonBarButton *barButtonView;
@property (retain, nonatomic) UIView *customView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_isPad;

@end
