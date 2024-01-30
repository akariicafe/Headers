@class SAMicroblogTwitterPostAuthor;

@interface SAMicroblogMicroblogSearchResultBase : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *author;

+ (id)microblogSearchResultBase;
+ (id)microblogSearchResultBaseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
