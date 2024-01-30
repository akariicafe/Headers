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
- (void)layoutSubviews;
- (void)setSubtitle:(id)a0;
- (void)setAction:(id)a0;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)icon;
- (id)subtitle;
- (void).cxx_destruct;
- (void)configureIconImageView:(BOOL)a0;
- (void)prepareForReuse;
- (void)setIcon:(id)a0;
- (void)setTitle:(id)a0;
- (id)action;

@end
