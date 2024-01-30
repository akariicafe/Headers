@class UILayoutGuide, NSArray, NSTextAttachment, NSLayoutConstraint;

@interface CKConversationListLargeTextCell : CKConversationListCell

@property (retain, nonatomic) UILayoutGuide *firstLineLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *editingDependentConstraint;
@property (retain, nonatomic) NSArray *contentSizeCategoryDependentConstraints;
@property (retain, nonatomic) NSTextAttachment *unreadIndicatorAttachment;

+ (double)cellHeightForDisplayScale:(double)a0;
+ (id)hyphenationParagraphStyle;
+ (id)identifierForConversation:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)updateUnreadIndicatorWithImage:(id)a0;
- (id)_constraintForEditing:(BOOL)a0;
- (id)_contentSizeCategoryDependentConstraints;
- (id)unreadIndicatorImageForVisibility:(BOOL)a0 withMuteState:(BOOL)a1;
- (void)updateContentsForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void)updateForEditing:(BOOL)a0;
- (void)updateFromLabelWithText:(id)a0;

@end
