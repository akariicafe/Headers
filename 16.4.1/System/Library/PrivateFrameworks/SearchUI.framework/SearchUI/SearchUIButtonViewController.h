@class SearchUIImageButton;

@interface SearchUIButtonViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageButton *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (id)setupView;
- (void)buttonPressed;
- (BOOL)shouldVerticallyCenter;

@end
