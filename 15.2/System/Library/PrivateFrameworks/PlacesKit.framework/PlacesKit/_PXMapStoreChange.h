@class NSSet, NSString;

@interface _PXMapStoreChange : NSObject <PXPlacesGeotaggedItemDataSourceChange>

@property (retain) NSSet *addedItems;
@property (retain) NSSet *removedItems;
@property (retain) NSSet *updatedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
