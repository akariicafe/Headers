@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation {
    id /* block */ mBookLibraryProxy;
    NSMutableArray *mBooks;
    BOOL mIncludeImages;
}

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithBookLibraryProxy:(id /* block */)a0 includeImages:(BOOL)a1;
- (void)parseBookMetadataOperationDidFail:(id)a0;
- (void)parsePDFMetadataOperationDidFail:(id)a0;
- (id)initWithBookLibraryProxy:(id /* block */)a0;
- (id)initWithBookLibraryProxy:(id /* block */)a0 request:(id)a1 error:(id *)a2;

@end
