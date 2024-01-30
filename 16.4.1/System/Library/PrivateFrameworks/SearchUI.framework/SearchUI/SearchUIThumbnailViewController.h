@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (BOOL)rowModelHasSuggestionThumbnail:(id)a0;
+ (BOOL)supportsRowModel:(id)a0;

- (void)setUsesCompactWidth:(BOOL)a0;
- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (id)setupView;
- (void)applyImageConstraints;
- (BOOL)shouldVerticallyCenter;

@end
