@class UITextView, NSArray, UIImageView, UILayoutGuide, NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUImageAndTextCell : UITableViewCell <HUCellSeparatorAppearanceDefining, HUCellProtocol>

@property (readonly, nonatomic) UIImageView *infoImageView;
@property (retain, nonatomic) NSArray *contentConstraints;
@property (readonly, nonatomic) UILayoutGuide *infoImageViewTrailingMarginLayoutGuide;
@property (readonly, nonatomic) UITextView *messageTextView;
@property (nonatomic) struct CGSize { double width; double height; } imageViewRecommendedSize;
@property (readonly, nonatomic) BOOL prefersSeparatorsHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

@end
