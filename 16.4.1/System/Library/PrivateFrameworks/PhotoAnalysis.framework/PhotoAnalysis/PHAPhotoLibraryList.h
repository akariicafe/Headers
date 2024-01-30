@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject

@property (retain) NSMutableDictionary *photoLibrariesByPath;
@property (readonly) unsigned long long count;

- (void)removeAllPhotoLibraries;
- (void)addPhotoLibraryAtURL:(id)a0;
- (void)saveToPersistentStorage;
- (id)init;
- (void)enumeratePhotoLibrariesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removePhotoLibraryAtURL:(id)a0;

@end
