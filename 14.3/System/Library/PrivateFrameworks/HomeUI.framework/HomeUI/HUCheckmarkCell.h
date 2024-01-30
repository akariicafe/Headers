@interface HUCheckmarkCell : HUActivityIndicatorCell

@property (nonatomic) BOOL checked;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)description;

@end
