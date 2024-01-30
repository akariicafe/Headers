@class NSString;

@interface SAMovieV2MovieContextObject : SADomainObject

@property (copy, nonatomic) NSString *movieName;

+ (id)movieContextObject;
+ (id)movieContextObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
