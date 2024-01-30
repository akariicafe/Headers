@class SearchUIImageButton;

@interface SearchUIButtonViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageButton *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (unsigned long long)type;
- (void)buttonPressed;
- (BOOL)shouldVerticallyCenter;

@end
