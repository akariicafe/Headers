@class UIImageView, CKBadgeView, UILabel, UIView, CKBrowserSelectionLabelAccessoryView;
@protocol CKBrowserCellDelegate;

@interface CKBrowserCell : UICollectionViewCell

@property (readonly) UIView *iconView;
@property (nonatomic) unsigned long long shinyStatus;
@property (retain, nonatomic) CKBrowserSelectionLabelAccessoryView *shinyStatusView;
@property (retain, nonatomic) UILabel *browserLabel;
@property (retain, nonatomic) UIImageView *borderView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionFrame;
@property (weak, nonatomic) id<CKBrowserCellDelegate> delegate;
@property (retain, nonatomic) CKBadgeView *badgeView;
@property (nonatomic) BOOL jitter;
@property (nonatomic) BOOL shouldShowLabel;

+ (Class)classForItemType:(long long)a0;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })browserCellIconFrame;
- (double)browserCellSelectionBorderOutset;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBorderStyle:(long long)a0;

@end
