@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (BOOL)isDraggable;
- (int)separatorStyle;
- (BOOL)isTappable;
- (id)nextCard;
- (id)dragURL;
- (void).cxx_destruct;
- (id)cardSection;
- (Class)collectionViewCellClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)cellViewClass;
- (id)dragText;
- (id)punchouts;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1;
- (id)firstRowModel;
- (id)dragTitle;
- (id)dragSubtitle;

@end
