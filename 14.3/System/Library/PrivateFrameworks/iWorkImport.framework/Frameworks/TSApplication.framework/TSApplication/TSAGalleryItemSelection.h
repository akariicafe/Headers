@class NSOrderedSet, TSAGalleryItem;

@interface TSAGalleryItemSelection : TSKSelection

@property (readonly, nonatomic) TSAGalleryItem *displayedItem;
@property (readonly, nonatomic) NSOrderedSet *items;

+ (Class)archivedSelectionClass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)UUIDDescription;
- (id)initWithItems:(id)a0 displayedItem:(id)a1;

@end
