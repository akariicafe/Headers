@class WebBookmarkCollection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MKBookmarkMigrator : NSObject {
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
    WebBookmarkCollection *_collection;
    NSMutableDictionary *_rootFolder;
}

- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (id)_createBookmarkFolderWithTitle:(id)a0 UUID:(id)a1;
- (id)_bookmarkFolderAtTitlePath:(id)a0 withinBookmarkFolder:(id)a1;
- (id)_createRootBookmarkFolder;
- (id)_bookmarkFolderAtTitlePath:(id)a0 withinRootFolder:(id)a1;
- (void)importDataEncodedInJSON:(id)a0;

@end
