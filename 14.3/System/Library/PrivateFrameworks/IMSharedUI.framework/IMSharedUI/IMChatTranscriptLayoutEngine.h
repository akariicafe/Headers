@class NSArray, IMChatTranscriptLayoutSpecification, NSMutableArray;
@protocol IMChatTranscriptLayoutEngineDataSource;

@interface IMChatTranscriptLayoutEngine : NSObject {
    NSMutableArray *_cachedDrawables;
}

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id<IMChatTranscriptLayoutEngineDataSource> dataSource;
@property (retain, nonatomic) IMChatTranscriptLayoutSpecification *layoutSpecification;

- (void)invalidateLayout;
- (void)reloadData;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateContentSize;
- (void)_invalidateCachedItemData;
- (unsigned long long)_numberOfTranscriptItems;
- (id)_cachedDrawableForTranscriptItem:(id)a0 atIndex:(unsigned long long)a1;
- (double)_spaceForVerticalSpaceDescriptor:(long long)a0;
- (void)_updateFrames;
- (void)_buildLayoutAttributesIfNeeded;
- (id)_makeDrawableForTranscriptItem:(id)a0;
- (id)_cachedDrawableAtIndexOrNil:(unsigned long long)a0;
- (id)drawableAtIndex:(unsigned long long)a0;
- (void)removeItemsAtIndexPaths:(id)a0 insertItemsAtIndexPaths:(id)a1;

@end
