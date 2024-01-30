@class MPMediaLibraryView, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaLibrarySystemFilters : NSObject {
    MPMediaLibraryView *_libraryView;
    BOOL _shouldExcludePurchaseHistoryContent;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *globalSerialQueue;
@property (class, readonly, nonatomic) NSMutableDictionary *systemFiltersPerLibrary;

+ (id)filtersForLibrary:(id)a0;

- (void)_updateFilters;
- (void).cxx_destruct;
- (BOOL)shouldExcludePurchaseHistoryContent;
- (void)_cloudLibraryAvailabilityDidChange:(id)a0;
- (id)_initWithLibrary:(id)a0;

@end
