@class NSData, NSSet;

@interface NWTLSParameters : NSObject

@property (copy) NSData *TLSSessionID;
@property (copy) NSSet *SSLCipherSuites;
@property unsigned long long minimumSSLProtocolVersion;
@property unsigned long long maximumSSLProtocolVersion;

- (void).cxx_destruct;

@end
