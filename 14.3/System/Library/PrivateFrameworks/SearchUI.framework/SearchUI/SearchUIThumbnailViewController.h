@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (BOOL)supportsRowModel:(id)a0;
+ (BOOL)rowModelHasSuggestionThumbnail:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (BOOL)shouldVerticallyCenter;
- (id)setupView;
- (void)forceVerticalCenteringOfContents;
- (void)setUsesCompactWidth:(BOOL)a0;
- (void)applyImageConstraints;

@end
