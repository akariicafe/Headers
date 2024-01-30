@class UILabel, UITextView, NSArray;

@interface SeymourUI.TVDetailHeaderCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ primaryStackView;
    void /* unknown type, empty encoding */ buttonStackView;
    void /* unknown type, empty encoding */ descriptionStack;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ traitsLabel;
    void /* unknown type, empty encoding */ captionTagsLabel;
    void /* unknown type, empty encoding */ buttonStackHeightConstraint;
    void /* unknown type, empty encoding */ traitsWidthConstraint;
    void /* unknown type, empty encoding */ buttonActions;
    void /* unknown type, empty encoding */ focusContainerGuide;
    void /* unknown type, empty encoding */ accessibilityMediaTags;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) UITextView *accessibilityDescriptionLabel;
@property (nonatomic, readonly) UITextView *accessibilityTraitsLabel;
@property (nonatomic, readonly) UILabel *accessibilityCaptionTagsLabel;
@property (nonatomic, copy) NSArray *accessibilityMediaTags;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTappedButton:(id)a0;

@end
