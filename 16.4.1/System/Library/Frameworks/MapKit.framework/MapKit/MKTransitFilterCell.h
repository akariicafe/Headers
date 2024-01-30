@class NSString, UILabel;

@interface MKTransitFilterCell : UICollectionViewCell {
    UILabel *_label;
}

@property (retain, nonatomic) NSString *titleText;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupLabel;

@end
