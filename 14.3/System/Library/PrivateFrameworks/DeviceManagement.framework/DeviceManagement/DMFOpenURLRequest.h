@class NSURL, NSString, NSArray;

@interface DMFOpenURLRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *URLDisplayName;
@property (nonatomic) BOOL lockInApp;
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
