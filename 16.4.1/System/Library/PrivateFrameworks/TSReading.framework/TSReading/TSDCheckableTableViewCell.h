@class UIButton, UIImageView;

@interface TSDCheckableTableViewCell : UITableViewCell {
    UIButton *mImageButton;
    UIImageView *mCheckmarkImageView;
}

@property (readonly, nonatomic) BOOL showsCheckboxOnRight;
@property (nonatomic) BOOL checked;

- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)imageForState:(unsigned long long)a0;
- (id)initWithReuseIdentifier:(id)a0 showsCheckboxOnRight:(BOOL)a1;
- (id)initWithReuseIdentifier:(id)a0 showsCheckboxOnRight:(BOOL)a1 style:(long long)a2;
- (void)setCheckmarkImage:(id)a0 forState:(unsigned long long)a1;

@end
