@class NSArray, NSString, NSURL, NSNumber;

@interface SAFmfLocationSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber *atRequestedLocation;
@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSString *proximity;
@property (copy, nonatomic) NSURL *searchContext;

+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
