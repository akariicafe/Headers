@interface MFLocalizedMessageHeaders : MFMessageHeaders

+ (id)localizedHeaders;
+ (id)localizedHeadersFromEnglishHeaders:(id)a0;
+ (id)englishHeadersFromLocalizedHeaders:(id)a0;

- (id)copyFormattedHeaderValueFromAddressList:(id)a0;
- (void)appendHeaderMarkupForKey:(id)a0 value:(id)a1 toString:(id)a2;
- (id)markupString;

@end
