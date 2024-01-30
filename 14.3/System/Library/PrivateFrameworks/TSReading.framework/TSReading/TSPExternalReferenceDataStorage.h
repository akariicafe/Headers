@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    NSData *_bookmarkData;
    TSPObjectContext *_context;
}

@property (readonly, nonatomic, getter=isReadable) BOOL readable;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)storageForDataCopyFromOtherContext;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)initWithBookmarkData:(id)a0 context:(id)a1;
- (id)bookmarkDataForArchiver:(id)a0;

@end
