@interface EMMailDropParser : NSObject

+ (id)parseExpiration:(double)a0;
+ (id)parseHeaderValue:(id)a0 forField:(id)a1;
+ (void)parseURL:(id)a0 intoMetadata:(id)a1;
+ (id)_parseURLQuery:(id)a0;
+ (BOOL)_domainIsAllowed:(id)a0;
+ (void)_parseDirectURL:(id)a0 intoMetadata:(id)a1;
+ (void)_parseWrappedURL:(id)a0 intoMetadata:(id)a1;
+ (id)allowedMailDropDownloadDomains;
+ (BOOL)urlIsValid:(id)a0;

@end
