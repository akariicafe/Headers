@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    NSData *_bookmarkData;
    BOOL _isReachable;
    TSPObjectContext *_context;
}

- (BOOL)isReadable;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)initWithBookmarkData:(id)a0 context:(id)a1;
- (id)bookmarkDataForArchiver:(id)a0;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;

@end
