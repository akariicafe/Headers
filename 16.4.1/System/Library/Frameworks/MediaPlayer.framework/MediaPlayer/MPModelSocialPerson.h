@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (copy, nonatomic) NSString *uncensoredName;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *biography;
@property (nonatomic, getter=isPrivate) BOOL privatePerson;
@property (nonatomic, getter=isVerified) BOOL verified;
@property (nonatomic) long long pendingRequestsCount;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (long long)genericObjectType;
+ (id)__pendingRequestsCount_KEY;
+ (id)__uncensoredName_KEY;
+ (id)kind;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__verified_KEY;
+ (id)__handle_KEY;
+ (id)__privatePerson_KEY;
+ (id)__biography_KEY;

- (id)artworkCatalog;

@end
