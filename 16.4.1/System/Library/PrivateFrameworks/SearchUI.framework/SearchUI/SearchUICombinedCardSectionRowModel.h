@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (int)separatorStyle;
- (id)cardSection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTappable;
- (BOOL)isDraggable;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (Class)collectionViewCellClass;
- (id)nextCard;
- (id)dragURL;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)firstRowModel;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1;
- (id)punchouts;

@end
