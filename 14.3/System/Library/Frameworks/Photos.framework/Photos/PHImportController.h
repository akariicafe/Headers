@class NSMutableDictionary, NSString, ICDeviceBrowser, NSHashTable;

@interface PHImportController : NSObject <ICDeviceBrowserDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourceListLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _importInProgressLock;
}

@property (retain, nonatomic) ICDeviceBrowser *deviceBrowser;
@property (retain, nonatomic) NSMutableDictionary *importDeviceSources;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL importInProgress;
@property (retain, nonatomic) id processInfoActivityToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)importSourceForUrls:(id)a0;

- (void)importAssets:(id)a0 fromImportSource:(id)a1 intoLibrary:(id)a2 withOptions:(id)a3 progress:(id *)a4 delegate:(id)a5 performanceDelegate:(id)a6 atEnd:(id /* block */)a7;
- (id)init;
- (void)deviceBrowser:(id)a0 didAddDevice:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)sourceIsConnected:(id)a0;
- (id)filterDuplicates:(id)a0 onSource:(id)a1 library:(id)a2 options:(id)a3 delegate:(id)a4;
- (void)importEnding;
- (void)importAssets:(id)a0 fromImportSource:(id)a1 intoLibraryAtURL:(id)a2 withOptions:(id)a3 progress:(id *)a4 delegate:(id)a5 performanceDelegate:(id)a6 atEnd:(id /* block */)a7;
- (id)importUrls:(id)a0 intoLibrary:(id)a1 withOptions:(id)a2 delegate:(id)a3 performanceDelegate:(id)a4 atEnd:(id /* block */)a5;
- (id)importUrls:(id)a0 withOptions:(id)a1 delegate:(id)a2 atEnd:(id /* block */)a3;
- (void)addImportControllerObserver:(id)a0;
- (void)importAssets:(id)a0 fromImportSource:(id)a1 withOptions:(id)a2 progress:(id *)a3 delegate:(id)a4 atEnd:(id /* block */)a5;
- (void)importStarting;
- (void)deviceBrowser:(id)a0 didRemoveDevice:(id)a1 moreGoing:(BOOL)a2;
- (void)accessSourceList:(id /* block */)a0;

@end
