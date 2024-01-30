@interface ICUlyssesContentMapping : ICContentMapping

- (BOOL)skipURLEncoding;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (id)contentItemClasses;
- (void)getTextURLQueryString:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (void)getTextRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (void)getImageURLQueryString:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;

@end
