@class UIImageView;

@interface AAUISuggestedContactCell : UITableViewCell {
    UIImageView *_accessoryImageView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateWithContact:(id)a0 pictureStore:(id)a1;

@end
