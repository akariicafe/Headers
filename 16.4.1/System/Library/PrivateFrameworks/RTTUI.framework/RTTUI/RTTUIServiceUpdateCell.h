@class UITextView, RTTServiceUpdate;
@protocol RTTUIServiceCellDelegate;

@interface RTTUIServiceUpdateCell : UITableViewCell {
    UITextView *_titleView;
    UITextView *_subtitleView;
    RTTServiceUpdate *_serviceUpdate;
}

@property (weak, nonatomic) id<RTTUIServiceCellDelegate> delegate;

+ (double)heightForWidth:(double)a0 delegate:(id)a1 serviceUpdate:(id)a2;

- (void)updateLayout;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)adjustTextViewSize;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 serviceUpdate:(id)a2;
- (id)serviceMessage;
- (id)serviceTitle;

@end
