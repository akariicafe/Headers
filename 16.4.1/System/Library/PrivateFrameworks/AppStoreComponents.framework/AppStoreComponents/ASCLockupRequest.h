@class NSDictionary, NSString, ASCAdamID;

@interface ASCLockupRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *mediaQueryParams;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;

+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 includeUnlistedApps:(BOOL)a3;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 minExternalVersionID:(id)a3 latestReleaseID:(id)a4 productVariantID:(id)a5;
+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 productVariantID:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)clone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3;
- (id)initWithID:(id)a0 kind:(id)a1 context:(id)a2;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 includeUnlistedApps:(BOOL)a3;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 minExternalVersionID:(id)a3 latestReleaseID:(id)a4 productVariantID:(id)a5;
- (id)_lockupRequestWithClientID:(id)a0;
- (id)lockupRequestByAddingMediaQueryParams:(id)a0;
- (id)lockupRequestWithClientID:(id)a0;
- (id)lockupRequestWithMediaQueryParams:(id)a0;
- (id)lockupRequestWithUnlistedAppsIncluded;

@end
