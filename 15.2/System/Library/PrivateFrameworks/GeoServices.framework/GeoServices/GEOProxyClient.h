@class NSString, GEOApplicationAuditToken;

@interface GEOProxyClient : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL isApplication;

+ (id)currentClient;
+ (id)compositeClientForClients:(id)a0;

- (id)initWithXPCConnection:(id)a0;
- (id)initWithAuditToken:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)URLConnectionProperties;
- (unsigned long long)hash;

@end
