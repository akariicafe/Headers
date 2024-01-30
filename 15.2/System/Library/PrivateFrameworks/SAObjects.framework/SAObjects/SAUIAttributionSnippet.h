@class SAUIAppPunchOut;

@interface SAUIAttributionSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (nonatomic) BOOL showKeyLine;

+ (id)attributionSnippet;
+ (id)attributionSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
