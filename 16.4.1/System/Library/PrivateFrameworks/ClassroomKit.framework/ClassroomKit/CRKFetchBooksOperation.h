@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation {
    id /* block */ mBookLibraryProxy;
    NSMutableArray *mBooks;
    BOOL mIncludeImages;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)initWithBookLibraryProxy:(id /* block */)a0;
- (id)initWithBookLibraryProxy:(id /* block */)a0 includeImages:(BOOL)a1;
- (id)initWithBookLibraryProxy:(id /* block */)a0 request:(id)a1 error:(id *)a2;
- (void)parseBookMetadataOperationDidFail:(id)a0;
- (void)parsePDFMetadataOperationDidFail:(id)a0;

@end
