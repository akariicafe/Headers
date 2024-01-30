@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) BOOL isInline;
@property (readonly) Class customCardSectionViewClass;

- (int)separatorStyle;
- (void).cxx_destruct;
- (id)dragSubtitle;
- (BOOL)anyInlineCardSectionsHavePunchouts;
- (BOOL)anyInlineCardSectionsHaveNextCards;
- (id)fallbackCardSectionForCompactResult;
- (id)punchouts;
- (BOOL)isDraggable;
- (Class)cardSectionViewClass;
- (id)dragURL;
- (id)nextCard;
- (id)description;
- (BOOL)isTappable;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (BOOL)prefersNoSeparatorAbove;
- (BOOL)hasLeadingImage;
- (BOOL)fillsBackgroundWithContent;
- (id)dragTitle;
- (BOOL)isQuerySuggestion;
- (BOOL)supportsCustomUserReportRequestAfforance;
- (id)accessibilityIdentifier;
- (id)dragText;
- (Class)cellViewClass;
- (id)reuseIdentifier;

@end
