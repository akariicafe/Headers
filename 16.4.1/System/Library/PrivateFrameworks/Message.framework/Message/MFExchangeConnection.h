@interface MFExchangeConnection : MFIMAPConnection

- (id)_fetchArgumentForMessageSkeletonsWithAllHeaders;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (BOOL)_isFetchResponseValid:(id)a0;

@end
