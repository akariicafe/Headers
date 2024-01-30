@class NSString;

@interface CRKFetchChaptersOperation : CATOperation {
    NSString *mPath;
    NSString *mIdentifierType;
    NSString *mIdentifier;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 error:(id *)a1;
- (id)initWithBook:(id)a0;
- (id)initWithBookPath:(id)a0 identifierType:(id)a1 identifier:(id)a2;
- (void)parseOFPPackageContentsOperationDidFinish:(id)a0;
- (void)parseOPFFilePathOperationDidFinish:(id)a0;
- (void)parseTableOfContentsOperationDidFinish:(id)a0;

@end
