@class NSOrderedSet, NSString, NSMutableOrderedSet, PXPlacesMapViewPort;

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult>

@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) PXPlacesMapViewPort *viewPort;
@property (readonly, nonatomic) NSOrderedSet *layoutItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0;
- (void)addItems:(id)a0;
- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
