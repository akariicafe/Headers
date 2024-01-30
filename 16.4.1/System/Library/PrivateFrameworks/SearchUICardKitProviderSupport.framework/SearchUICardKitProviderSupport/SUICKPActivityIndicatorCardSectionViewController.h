@interface SUICKPActivityIndicatorCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (BOOL)_shouldRenderButtonOverlay;
- (BOOL)_expectsSearchUIView;
- (BOOL)_isIndicatingActivity;

@end
