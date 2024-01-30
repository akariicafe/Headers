@class UITextView, NSArray, NSString, HFItem, UILabel;
@protocol HUResizableCellDelegate;

@interface HUInstructionsCell : UITableViewCell <UITextViewDelegate, HUCellProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *descriptionView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) BOOL hidesTopSpacing;
@property (nonatomic) double contentBottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
