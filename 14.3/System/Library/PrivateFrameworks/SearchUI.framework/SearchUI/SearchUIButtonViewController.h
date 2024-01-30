@class SearchUIImageButton;

@interface SearchUIButtonViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageButton *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (BOOL)shouldVerticallyCenter;
- (id)setupView;
- (void)buttonPressed;

@end
