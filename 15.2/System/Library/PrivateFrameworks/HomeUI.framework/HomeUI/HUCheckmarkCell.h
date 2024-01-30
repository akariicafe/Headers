@class UIImage;

@interface HUCheckmarkCell : HUActivityIndicatorCell

@property (nonatomic) BOOL checked;
@property (retain, nonatomic) UIImage *checkedImage;
@property (retain, nonatomic) UIImage *uncheckedImage;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
