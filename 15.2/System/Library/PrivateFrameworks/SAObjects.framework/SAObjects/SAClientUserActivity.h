@class NSArray, NSString, NSDictionary, NSURL;

@interface SAClientUserActivity : SAUserActivity

@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *requiredUserInfoKeys;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSURL *webpageURL;

+ (id)clientUserActivity;
+ (id)clientUserActivityWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
