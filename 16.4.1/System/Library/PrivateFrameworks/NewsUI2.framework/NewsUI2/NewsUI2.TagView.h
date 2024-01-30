@class NSArray, NSString;

@interface NewsUI2.TagView : UIView <TSAXCustomReorderMessaging> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageBorder;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ countLabel;
    void /* unknown type, empty encoding */ accessoryView;
    void /* unknown type, empty encoding */ isSelectable;
    void /* unknown type, empty encoding */ isHighlightable;
    void /* unknown type, empty encoding */ isEditing;
    void /* unknown type, empty encoding */ titleFrame;
    void /* unknown type, empty encoding */ editingTitleFrame;
    void /* unknown type, empty encoding */ subtitleFrame;
    void /* unknown type, empty encoding */ editingSubtitleFrame;
    void /* unknown type, empty encoding */ contentAccessibilityElement;
    void /* unknown type, empty encoding */ _notificationSwitch;
    void /* unknown type, empty encoding */ _likeButton;
    void /* unknown type, empty encoding */ _dislikeButton;
    void /* unknown type, empty encoding */ _shortcutButton;
    void /* unknown type, empty encoding */ keyCommandBlocks;
    void /* unknown type, empty encoding */ tsaxAccessibilityLabelForReordering;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isHighlighted;
}

@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) NSString *tsaxAccessibilityLabelForReordering;
@property (nonatomic, readonly) NSString *title;

- (BOOL)accessibilityActivate;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
