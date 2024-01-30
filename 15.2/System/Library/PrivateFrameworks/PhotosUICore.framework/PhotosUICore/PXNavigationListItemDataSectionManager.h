@class PXDataSectionEnablementForwarder, PHFetchResult, NSString, NSOperationQueue, PHCollection;
@protocol PXNavigationListItem;

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXDataSectionManagerEnabling>

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic, getter=isCollectionEmpty) BOOL collectionEmpty;
@property (readonly, nonatomic, getter=isCollectionVisible) BOOL collectionVisible;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (readonly, nonatomic) id<PXNavigationListItem> listItem;
@property (nonatomic, getter=isHiddenWhenEmpty) BOOL hiddenWhenEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder;

- (void)collectionFetchOperationDidComplete:(id)a0;
- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)a0;
- (id)initWithItem:(id)a0;
- (BOOL)allowsEmptyDataSection;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)initWithCollection:(id)a0 workQueue:(id)a1;
- (void)updateDataSectionIfNecessary;

@end
