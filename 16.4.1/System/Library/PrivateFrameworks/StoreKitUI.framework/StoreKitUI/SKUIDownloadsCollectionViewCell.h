@class SKUIDownloadsCellView, UIImageView;

@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell {
    UIImageView *_editIndicator;
}

@property (readonly, nonatomic) SKUIDownloadsCellView *cellView;
@property (nonatomic) long long cellState;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_reloadEditState;

@end
