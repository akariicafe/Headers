@class ISPropertyListProvider, SUClientInterface;

@interface SUStorePageDataProvider : ISDataProvider

@property (retain) SUClientInterface *clientInterface;
@property long long outputType;
@property (copy) ISPropertyListProvider *propertyListDataProvider;
@property (readonly) BOOL shouldProcessTouchIDDialogs;

- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (void).cxx_destruct;
- (void)_loadPersonalizedStoreOffersForPage:(id)a0;

@end
