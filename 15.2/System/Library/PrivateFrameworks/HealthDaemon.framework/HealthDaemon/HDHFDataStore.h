@class NSString, NSObject;
@protocol HDHFDataStoreDelegate, OS_dispatch_queue;

@interface HDHFDataStore : NSObject {
    struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem *__ptr_; struct __shared_weak_count *__cntrl_; } _fileSystem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct shared_ptr<health::DataStore> { struct DataStore *__ptr_; struct __shared_weak_count *__cntrl_; } _highFrequencyDataStore;
    _Atomic BOOL _invalidated;
    _Atomic BOOL _hasOpenStore;
    NSObject<OS_dispatch_queue> *_openQueue;
    long long _openAttempt;
}

@property (nonatomic) BOOL isOpen;
@property (weak, nonatomic) id<HDHFDataStoreDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *fileSystemPath;
@property (readonly, nonatomic) long long rebuildState;

- (id)fileManager;
- (id)diagnosticDescription;
- (id)initWithPath:(id)a0;
- (BOOL)moveHFDAsideWithoutOverwritingFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)deleteHFDAt:(id)a0 error:(id *)a1;
- (void)unitTest_resetRebuildState;
- (id)description;
- (void)unitTest_requestMigrationToSQLite;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 fileSystem:(struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem *x0; struct __shared_weak_count *x1; })a1;
- (BOOL)accessStoreWithError:(id *)a0 block:(id /* block */)a1;
- (BOOL)discardStoreWithError:(id *)a0;
- (void)dealloc;
- (void)unitTest_requestRebuild;
- (id).cxx_construct;
- (void)flushForInvalidation:(BOOL)a0;
- (struct unique_ptr<health::DataStore, std::default_delete<health::DataStore>> { struct __compressed_pair<health::DataStore *, std::default_delete<health::DataStore>> { struct DataStore *x0; } x0; })dataStoreAtURL:(id)a0 filesystem:(const void *)a1 allowCheckpoint:(BOOL)a2 error:(id *)a3;

@end
