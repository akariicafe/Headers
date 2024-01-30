@class NSOrderedSet, TSAGalleryItem;

@interface TSAGalleryItemSelection : TSKSelection

@property (readonly, nonatomic) TSAGalleryItem *displayedItem;
@property (readonly, nonatomic) NSOrderedSet *items;

+ (Class)archivedSelectionClass;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)UUIDDescription;
- (id)initWithItems:(id)a0 displayedItem:(id)a1;

@end
