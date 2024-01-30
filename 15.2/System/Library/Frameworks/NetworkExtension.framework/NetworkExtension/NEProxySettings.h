@class NSString, NSArray, NSURL, NEProxyServer;

@interface NEProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    NEProxyServer *_HTTPServer;
    NEProxyServer *_HTTPSServer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useForAllDomains;
@property BOOL autoProxyDiscovery;
@property (copy) NSURL *proxyAutoConfigURL;
@property (copy) NSString *proxyAutoConfigJavaScript;
@property BOOL FTPEnabled;
@property (copy) NEProxyServer *FTPServer;
@property BOOL SOCKSEnabled;
@property (copy) NEProxyServer *SOCKSServer;
@property BOOL RTSPEnabled;
@property (copy) NEProxyServer *RTSPServer;
@property BOOL gopherEnabled;
@property (copy) NEProxyServer *gopherServer;
@property BOOL usePassiveFTP;
@property (copy) NSArray *supplementalMatchDomains;
@property (copy) NSArray *supplementalMatchOrders;
@property (readonly) BOOL enabled;
@property BOOL autoProxyConfigurationEnabled;
@property (copy) NSURL *proxyAutoConfigurationURL;
@property (copy) NSString *proxyAutoConfigurationJavaScript;
@property BOOL HTTPEnabled;
@property (copy) NEProxyServer *HTTPServer;
@property BOOL HTTPSEnabled;
@property (copy) NEProxyServer *HTTPSServer;
@property BOOL excludeSimpleHostnames;
@property (copy) NSArray *exceptionList;
@property (copy) NSArray *matchDomains;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)needToUpdateKeychain;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)syncWithKeychain;
- (void)removeKeychainItems;
- (void)copyPasswordsFromKeychain;
- (id)copyLegacyDictionary;

@end
