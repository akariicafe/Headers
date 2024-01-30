@class SearchUIImageView;

@interface SearchUIActionDomainIndicatorViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (id)setupView;

@end
