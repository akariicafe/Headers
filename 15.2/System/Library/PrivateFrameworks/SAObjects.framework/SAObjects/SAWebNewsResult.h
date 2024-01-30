@class NSString, NSDate;

@interface SAWebNewsResult : SAWebWebResult

@property (copy, nonatomic) NSDate *publicationDate;
@property (copy, nonatomic) NSString *source;

+ (id)newsResult;
+ (id)newsResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
