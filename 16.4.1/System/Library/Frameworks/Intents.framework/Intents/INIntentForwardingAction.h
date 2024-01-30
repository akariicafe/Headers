@class NSString, INIntent;

@interface INIntentForwardingAction : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) Class responseClass;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) struct { unsigned int val[8]; } hostProcessAuditToken;
@property (nonatomic) BOOL allowsScenelessAppLaunch;
@property (readonly, nonatomic) BOOL allowsForegroundAppLaunch;
@property (nonatomic) double requestTimeout;

- (id)initWithIntent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
