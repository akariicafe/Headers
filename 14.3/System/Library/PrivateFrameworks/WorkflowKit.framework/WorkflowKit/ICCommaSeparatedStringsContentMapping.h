@interface ICCommaSeparatedStringsContentMapping : ICContentMapping

- (BOOL)supportsMultipleItems;
- (BOOL)skipURLEncoding;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (id)contentItemClasses;
- (id)escapedCharacters;
- (id)allowedCharacterSet;

@end
