@class NSString, NSData, NSObject;
@protocol OS_nw_path;

@interface SONetworkIdentity : NSObject

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *networkFingerprint;
@property (nonatomic, getter=isPerAppVPN) BOOL perAppVPN;
@property (retain, nonatomic) NSObject<OS_nw_path> *lastpath;
@property (retain, nonatomic) NSData *auditToken;

- (void).cxx_destruct;
- (void)determineNetworkFingerprint;
- (id)initForRealm:(id)a0 bundleIdentifier:(id)a1 auditToken:(id)a2;
- (void)evaluateVPNPath:(id)a0;
- (id)getVPNServerSignature:(id)a0;
- (id)getInterfaceSignature:(id)a0;
- (id)getInterfaceFingerprintForDynamicInterface:(const char *)a0;
- (void)evaluateVPNPathForHost:(id)a0 port:(id)a1;
- (void)evaluateVPNPath;

@end
