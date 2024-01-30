@class HUIconView, UIColor, UICellAccessoryCustomView, HFItem, NSLayoutConstraint, UIView, NSString;
@protocol HUResizableCellDelegate;

@interface HUIconCollectionListCell : UICollectionViewListCell <HUCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) NSLayoutConstraint *iconSizeConstraint;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UICellAccessoryCustomView *iconAccessoryView;
@property (retain, nonatomic) UIColor *iconForegroundColor;
@property (nonatomic) BOOL iconForegroundColorFollowsTintColor;
@property (nonatomic) double iconAlpha;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long iconDisplayStyle;
@property (nonatomic) BOOL iconTintColorFollowsDisabledState;
@property (nonatomic) BOOL separatorInsetLinesUpWithText;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

@end
