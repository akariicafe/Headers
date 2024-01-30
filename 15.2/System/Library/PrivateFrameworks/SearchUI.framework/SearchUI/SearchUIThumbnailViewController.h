@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (BOOL)supportsRowModel:(id)a0;
+ (BOOL)rowModelHasSuggestionThumbnail:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (void)setUsesCompactWidth:(BOOL)a0;
- (unsigned long long)type;
- (BOOL)shouldVerticallyCenter;
- (void)applyImageConstraints;

@end
