@class SearchUIImageView;

@interface SearchUIActionDomainIndicatorViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (unsigned long long)type;

@end
