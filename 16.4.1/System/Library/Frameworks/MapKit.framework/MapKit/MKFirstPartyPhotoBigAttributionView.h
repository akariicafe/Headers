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

- (void)_setupConstraints;
- (id)initWithContext:(long long)a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)didEndAnimatingActivityIndicatorView;
- (void)didUpdateAttributionViewType;
- (void)didUpdateMapItem;
- (void)willStartAnimatingActivityIndicatorView;

@end
