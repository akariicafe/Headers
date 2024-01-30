@class NSString, UIImageView, UIImage, UILabel;

@interface MKFirstPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass> {
    UIImageView *_glyphView;
    UILabel *_titleLabel;
}

@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) UIImage *glyphImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(long long)a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)didUpdateMapItem;
- (void)didUpdateAttributionViewType;
- (void)willStartAnimatingActivityIndicatorView;
- (void)didEndAnimatingActivityIndicatorView;
- (void)_setupSubviews;

@end
