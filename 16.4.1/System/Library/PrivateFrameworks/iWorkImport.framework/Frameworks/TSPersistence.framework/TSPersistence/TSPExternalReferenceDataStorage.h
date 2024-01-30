@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    NSData *_bookmarkData;
    BOOL _isReachable;
    TSPObjectContext *_context;
}

- (id)initWithURL:(id)a0;
- (BOOL)isReadable;
- (void).cxx_destruct;
- (id)bookmarkDataForArchiver:(id)a0;
- (id)initWithBookmarkData:(id)a0 context:(id)a1;
- (void)performReadWithAccessor:(id /* block */)a0;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (unsigned long long)materializedLength;

@end
