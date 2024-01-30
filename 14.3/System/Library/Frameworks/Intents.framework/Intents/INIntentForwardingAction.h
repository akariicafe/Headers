@class NSString, INIntent;

@interface INIntentForwardingAction : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) Class responseClass;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) struct { unsigned int val[8]; } hostProcessAuditToken;
@property (nonatomic) BOOL allowsScenelessAppLaunch;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIntent:(id)a0;
- (void)executeRemotelyWithVendorRemote:(id)a0 appHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;

@end
