@class NSString, RUILinkLabel, UIImageView, UILabel;

@interface RUIHeaderView : UIView <RUIHeader> {
    UILabel *_headerLabel;
    RUILinkLabel *_detailHeaderLabel;
    UILabel *_subHeaderLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    BOOL _isFirstSection;
    BOOL _customIconSize;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (id)iconImage;
- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setSubHeaderText:(id)a0 attributes:(id)a1;
- (id)subHeaderLabel;
- (void)setDetailText:(id)a0 attributes:(id)a1;
- (id)detailHeaderLabel;
- (void)setSectionIsFirst:(BOOL)a0;
- (void)layoutSubviews;
- (void)setText:(id)a0 attributes:(id)a1;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)headerLabel;
- (BOOL)_hasIcon;
- (void)setImageAlignment:(int)a0;
- (void)setHeaderAlignment:(long long)a0;
- (double)_headerOffsetInView:(id)a0;
- (void)setHeaderColor:(id)a0;
- (void)setSubHeaderAlignment:(long long)a0;
- (void)setSubHeaderColor:(id)a0;
- (void)setDetailHeaderColor:(id)a0;
- (double)_imageTitlePaddingInView:(id)a0;
- (double)_titleSubtitlePaddingInView:(id)a0;

@end
