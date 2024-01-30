@class PREditingColorItem, NSString, UIView;

@interface PREditingColorItemView : PRSelectableEditingItemView

@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) PREditingColorItem *colorItem;
@property (readonly, copy, nonatomic) NSString *localizedName;

- (void).cxx_destruct;
- (id)initWithColorItem:(id)a0;
- (void)updateForChangedColor;

@end
