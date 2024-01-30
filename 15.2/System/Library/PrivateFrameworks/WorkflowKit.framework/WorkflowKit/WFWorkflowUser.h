@class NSUUID, NSString, NSURL, NSDate, NSNumber, NSDictionary;

@interface WFWorkflowUser : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *twitter;
@property (readonly, nonatomic) NSURL *websiteURL;
@property (readonly, nonatomic) NSURL *profileImageURL;
@property (readonly, nonatomic) NSDate *dateJoined;
@property (readonly, nonatomic) NSNumber *isAdmin;
@property (readonly, nonatomic) long long mainIdentity;
@property (readonly, nonatomic) NSString *websiteDisplayName;
@property (readonly, nonatomic) NSString *twitterDisplayName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)mainIdentityJSONTransformer;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
