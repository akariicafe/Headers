@class NSString, UILabel;

@interface MKTransitFilterCell : UICollectionViewCell {
    UILabel *_label;
}

@property (retain, nonatomic) NSString *titleText;

- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupLabel;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
