@class NSString, WBSOpenSearchURLTemplate;

@interface WBSOpenSearchDescription : NSObject

@property (readonly, nonatomic) NSString *descriptionDocumentURLString;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInXML;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithDescriptionDocumentURLString:(id)a0 searchURLTemplate:(id)a1 urlTemplateForSuggestionsInJSON:(id)a2 urlTemplateForSuggestionsInXML:(id)a3;

@end
