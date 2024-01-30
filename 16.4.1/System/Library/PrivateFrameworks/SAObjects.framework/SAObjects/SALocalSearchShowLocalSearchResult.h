@class NSString, NSData, NSDate;

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSData *rawData;

+ (id)showLocalSearchResult;
+ (id)showLocalSearchResultWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
