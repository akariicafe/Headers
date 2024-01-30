@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (int)separatorStyle;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1;
- (id)firstRowModel;
- (id)dragSubtitle;
- (id)punchouts;
- (BOOL)isDraggable;
- (id)dragURL;
- (id)nextCard;
- (BOOL)isTappable;
- (id)dragTitle;
- (id)dragText;
- (Class)cellViewClass;

@end
