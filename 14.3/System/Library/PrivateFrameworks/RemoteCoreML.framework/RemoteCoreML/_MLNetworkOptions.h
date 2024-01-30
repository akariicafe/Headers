@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (const char *)port;
- (const char *)psk;
- (id)initWithOptions:(id)a0;
- (const char *)localPort;
- (void).cxx_destruct;
- (unsigned long long)family;
- (BOOL)useAWDL;
- (BOOL)useUDP;
- (BOOL)useTLS;
- (BOOL)useBonjour;
- (const char *)networkNameIdentifier;
- (const char *)localAddr;
- (long long)receiveTimeoutValue;

@end
