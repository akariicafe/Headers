@interface ICCommaSeparatedStringsContentMapping : ICContentMapping

- (BOOL)supportsMultipleItems;
- (BOOL)skipURLEncoding;
- (id)allowedCharacterSet;
- (id)contentItemClasses;
- (id)escapedCharacters;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;

@end
