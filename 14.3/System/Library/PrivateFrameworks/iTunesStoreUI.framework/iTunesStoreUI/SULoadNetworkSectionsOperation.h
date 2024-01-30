@class SUSectionsResponse, ISStoreURLOperation, NSString, SUClientInterface;

@interface SULoadNetworkSectionsOperation : ISOperation {
    ISStoreURLOperation *_baseOperation;
    SUClientInterface *_clientInterface;
    NSString *_expectedVersionString;
    SUSectionsResponse *_sectionsResponse;
}

@property (retain) ISStoreURLOperation *baseOperation;
@property (retain) NSString *expectedVersionString;
@property (readonly) SUSectionsResponse *sectionsResponse;

- (void)run;
- (void)dealloc;
- (void)_setSectionsResponse:(id)a0;
- (id)initWithURL:(id)a0 clientInterface:(id)a1;
- (BOOL)_loadArtworkForResponse:(id)a0;
- (id)_copyImageWithURL:(id)a0 scale:(float)a1 error:(id *)a2;
- (id)_bestItemImageForImages:(id)a0 withImageKind:(id)a1;
- (id)_copyLoadedItemImage:(id)a0 error:(id *)a1;

@end
