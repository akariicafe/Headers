@class NSMutableDictionary, NSSet, NSString, PHPhotoLibrary;

@interface PGPhotosHighlightItemModelManager : NSObject <PGHighlightItemModelReader, PGHighlightItemListModelWriter>

@property (readonly, nonatomic) PHPhotoLibrary *library;
@property (readonly, nonatomic) unsigned short kind;
@property (readonly, nonatomic) NSMutableDictionary *visibilityStateByDayHighlighItemUUID;
@property (readonly, nonatomic) NSSet *highlightUUIDsWithVisibilityStateChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchChildHighlightItemsForHighlightItem:(id)a0;
- (void).cxx_destruct;
- (id)fetchParentHighlightItemsForHighlightItems:(id)a0;
- (id)consumeHighlightItemList:(id)a0;
- (void)setVisibilityState:(unsigned short)a0 forHighlightItem:(id)a1;
- (unsigned short)visibilityStateForHighlightItem:(id)a0;
- (id)initWithLibrary:(id)a0 forKind:(unsigned short)a1;
- (void)addVisibleHighlight:(id)a0 inMonth:(id)a1;

@end
