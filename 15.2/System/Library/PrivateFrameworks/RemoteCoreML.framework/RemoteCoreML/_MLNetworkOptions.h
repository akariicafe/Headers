@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (unsigned long long)family;
- (const char *)psk;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (const char *)port;
- (BOOL)useAWDL;
- (const char *)localPort;
- (BOOL)useUDP;
- (BOOL)useTLS;
- (BOOL)useBonjour;
- (const char *)networkNameIdentifier;
- (const char *)localAddr;
- (long long)receiveTimeoutValue;

@end
