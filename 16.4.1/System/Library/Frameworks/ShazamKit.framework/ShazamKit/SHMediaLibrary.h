@class SHMediaLibraryRequest, NSString;
@protocol SHMediaLibrarySyncDelegate, SHMediaLibrary;

@interface SHMediaLibrary : NSObject <SHMediaLibrarySyncDelegate, SHMediaLibrary>

@property (class, readonly, nonatomic) SHMediaLibrary *defaultLibrary;

@property (retain, nonatomic) id<SHMediaLibrary> remoteLibrary;
@property (retain, nonatomic) SHMediaLibraryRequest *libraryRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHMediaLibrarySyncDelegate> delegate;

- (void)_synchronize;
- (void).cxx_destruct;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_libraryWillBeginSync:(id)a0;
- (void)_queryLibraryWithCompletionHandler:(id /* block */)a0;
- (void)_queryLibraryWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1;
- (void)_updateTracks:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithRemoteLibrary:(id)a0;
- (void)synchronizeSnapshot:(id)a0 startCondition:(id)a1 completionHandler:(id /* block */)a2;

@end
