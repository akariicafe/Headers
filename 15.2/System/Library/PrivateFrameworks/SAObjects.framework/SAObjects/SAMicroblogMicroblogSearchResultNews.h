@class NSURL, NSString;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (copy, nonatomic) NSURL *articleURL;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *title;

+ (id)microblogSearchResultNews;
+ (id)microblogSearchResultNewsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
