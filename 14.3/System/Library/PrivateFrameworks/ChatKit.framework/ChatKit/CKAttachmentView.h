@class NSString, UIImageView, CKMediaObject, UILabel;

@interface CKAttachmentView : UIView <CKAttachmentView>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)icon;
- (void)prepareForReuse;
- (id)subtitle;
- (id)action;
- (void)configureIconImageView:(BOOL)a0;
- (void)setIcon:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (void)setAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)title;

@end
