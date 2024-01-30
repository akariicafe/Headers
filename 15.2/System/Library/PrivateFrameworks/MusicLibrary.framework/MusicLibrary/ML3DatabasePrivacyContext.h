@class NSString, PAApplication;

@interface ML3DatabasePrivacyContext : NSObject <NSSecureCoding> {
    PAApplication *_clientApplication;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;

+ (id)sharedContext;
+ (void)logDatabasePrivacyAccessWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientIdentity:(id)a0;
- (id)initWithPAApplication:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)logDatabasePrivacyAccess;

@end
