@class NSString, NSData, NSObject;
@protocol OS_nw_path;

@interface SONetworkIdentity : NSObject

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *networkFingerprint;
@property (retain, nonatomic) NSObject<OS_nw_path> *lastpath;
@property (retain, nonatomic) NSData *auditToken;

- (void).cxx_destruct;
- (void)determineNetworkFingerprint;
- (id)getVPNServerSignature:(id)a0;
- (id)getInterfaceSignature:(id)a0;
- (id)getInterfaceFingerprintForDynamicInterface:(const char *)a0;
- (id)initForRealm:(id)a0 bundleIdentifier:(id)a1 auditToken:(id)a2;

@end
