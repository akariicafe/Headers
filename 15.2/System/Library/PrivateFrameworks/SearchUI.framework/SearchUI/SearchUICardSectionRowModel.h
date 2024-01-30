@class NSString;

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL isHorizontalInLayout;
@property (copy, nonatomic) NSString *cardReuseIdentifier;
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) BOOL hasCustomCornerRounding;

- (BOOL)isDraggable;
- (int)separatorStyle;
- (BOOL)isTappable;
- (id)accessibilityIdentifier;
- (id)description;
- (id)nextCard;
- (id)dragURL;
- (void).cxx_destruct;
- (Class)collectionViewCellClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)cellViewClass;
- (id)reuseIdentifier;
- (id)dragText;
- (id)punchouts;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (BOOL)isQuerySuggestion;
- (BOOL)prefersNoSeparatorAbove;
- (BOOL)hasLeadingImage;
- (BOOL)fillsBackgroundWithContent;
- (BOOL)supportsCustomUserReportRequestAfforance;
- (id)dragTitle;
- (id)dragSubtitle;
- (id)horizontalRowModel;
- (BOOL)anyInlineCardSectionsHavePunchouts;
- (BOOL)anyInlineCardSectionsHaveNextCards;
- (id)fallbackCardSectionForCompactResult;

@end
