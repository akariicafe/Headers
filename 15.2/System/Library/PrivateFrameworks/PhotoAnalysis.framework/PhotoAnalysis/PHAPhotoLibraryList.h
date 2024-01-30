@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject

@property (retain) NSMutableDictionary *photoLibrariesByPath;
@property (readonly) unsigned long long count;

- (void)saveToPersistentStorage;
- (void)removeAllPhotoLibraries;
- (void)removePhotoLibraryAtURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enumeratePhotoLibrariesWithBlock:(id /* block */)a0;
- (void)addPhotoLibraryAtURL:(id)a0;

@end
