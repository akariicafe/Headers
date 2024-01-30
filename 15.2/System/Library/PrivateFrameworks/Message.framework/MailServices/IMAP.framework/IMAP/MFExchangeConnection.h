@interface MFExchangeConnection : MFIMAPConnection

- (id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)a0;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (BOOL)_isFetchResponseValid:(id)a0;

@end
