@class NSString;

@interface CRKFetchChaptersOperation : CATOperation {
    NSString *mPath;
    NSString *mIdentifierType;
    NSString *mIdentifier;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithBook:(id)a0;
- (BOOL)isAsynchronous;
- (id)initWithRequest:(id)a0 error:(id *)a1;
- (id)initWithBookPath:(id)a0 identifierType:(id)a1 identifier:(id)a2;
- (void)parseOPFFilePathOperationDidFinish:(id)a0;
- (void)parseOFPPackageContentsOperationDidFinish:(id)a0;
- (void)parseTableOfContentsOperationDidFinish:(id)a0;

@end
