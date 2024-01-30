@class UILabel;

@interface NCSchedulerViewHeader : UICollectionReusableView {
    UILabel *_label;
}

+ (id)_text;
+ (id)_font;
+ (id)reuseIdentifier;
+ (double)preferredHeightForWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
