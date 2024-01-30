@class SAPersonAttribute, NSNumber, NSDate;

@interface SAPhoneCallSearchResult : SADomainObject

@property (copy, nonatomic) NSDate *callTime;
@property (retain, nonatomic) SAPersonAttribute *contact;
@property (copy, nonatomic) NSNumber *isNew;

+ (id)callSearchResult;
+ (id)callSearchResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
