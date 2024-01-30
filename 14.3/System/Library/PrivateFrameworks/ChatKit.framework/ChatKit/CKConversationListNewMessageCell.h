@class CKAvatarView, CKConversation, NSObject, UIButton;
@protocol CKConversationListCellDelegate;

@interface CKConversationListNewMessageCell : UITableViewCell {
    UIButton *_closeButton;
    CKAvatarView *_avatarView;
}

@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (retain, nonatomic) CKConversation *conversation;

+ (id)identifier;

- (id)avatarView;
- (BOOL)_isCollapsed;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLabelVisibility;
- (void)updateContentsForConversation:(id)a0;
- (void)layoutSubviews;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;
- (void)deleteButtonTapped;
- (BOOL)showingEditControl;
- (void)updateWithForwardedConfigurationState:(unsigned long long)a0;
- (void)updateFontSize;
- (double)leadingLayoutMargin;

@end
