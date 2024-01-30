@class NSString, CNContact, UILabel, CNAvatarView;

@interface PKAvatarHeaderView : UIView {
    CNAvatarView *_avatarView;
}

@property (copy, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSString *counterpartHandle;
@property (copy, nonatomic) UILabel *primaryLabel;
@property (copy, nonatomic) UILabel *secondaryLabel;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 applyLayout:(BOOL)a1;
- (void)configureForContact;
- (void)layoutSubviews;
- (id)initWithContact:(id)a0 counterpartHandle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
