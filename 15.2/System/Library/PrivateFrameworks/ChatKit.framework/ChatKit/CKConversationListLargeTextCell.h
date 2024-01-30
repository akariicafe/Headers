@class UIColor, UILayoutGuide, NSArray, NSTextAttachment, NSLayoutConstraint;

@interface CKConversationListLargeTextCell : CKConversationListCell

@property (retain, nonatomic) UILayoutGuide *firstLineLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *editingDependentConstraint;
@property (retain, nonatomic) NSArray *contentSizeCategoryDependentConstraints;
@property (retain, nonatomic) NSTextAttachment *unreadIndicatorAttachment;
@property (retain, nonatomic) UIColor *unreadIndicatorColor;

+ (id)identifierForConversation:(id)a0;
+ (id)hyphenationParagraphStyle;
+ (double)cellHeightForDisplayScale:(double)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_constraintForEditing:(BOOL)a0;
- (id)_contentSizeCategoryDependentConstraints;
- (void)updateContentsForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void)updateFromLabelWithText:(id)a0;
- (void)updateForEditing:(BOOL)a0;
- (id)unreadIndicatorImageForVisibility:(BOOL)a0 withMuteState:(BOOL)a1;
- (id)unreadIndicatorColorForVisibility:(BOOL)a0 withMuteState:(BOOL)a1;
- (void)updateUnreadIndicatorWithImage:(id)a0 tintColor:(id)a1;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;

@end
