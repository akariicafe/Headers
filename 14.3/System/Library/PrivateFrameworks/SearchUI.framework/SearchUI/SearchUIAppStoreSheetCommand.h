@interface SearchUIAppStoreSheetCommand : SearchUITapCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (BOOL)prefersModalPresentation;
- (id)setupViewController;
- (id)resultEngagementFeedback;
- (id)cardSectionEngagementFeedback;

@end
