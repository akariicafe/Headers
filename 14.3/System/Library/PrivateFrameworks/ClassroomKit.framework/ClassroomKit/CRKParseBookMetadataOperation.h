@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation {
    BOOL mParseImage;
}

@property (readonly, nonatomic) CRKBook *book;

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithBook:(id)a0 parseImage:(BOOL)a1;
- (void)parseContentsFilePathOperationDidFinish:(id)a0;
- (void)parseBookContentsOperationDidFinish:(id)a0;

@end
