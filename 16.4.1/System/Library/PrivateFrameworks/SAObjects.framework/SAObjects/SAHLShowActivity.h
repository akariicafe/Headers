@class NSString;

@interface SAHLShowActivity : SADomainCommand

@property (copy, nonatomic) NSString *activityDataType;
@property (copy, nonatomic) NSString *activityView;

+ (id)showActivity;
+ (id)showActivityWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
