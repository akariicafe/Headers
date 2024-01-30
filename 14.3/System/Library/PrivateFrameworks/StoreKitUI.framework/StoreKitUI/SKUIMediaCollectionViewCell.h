@class SKUIEmbeddedMediaView;

@interface SKUIMediaCollectionViewCell : SKUICollectionViewCell {
    SKUIEmbeddedMediaView *_mediaView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) SKUIEmbeddedMediaView *mediaView;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
