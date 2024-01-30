@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (const char *)port;
- (const char *)localPort;
- (unsigned long long)family;
- (BOOL)useAWDL;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (const char *)psk;
- (BOOL)useTLS;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;
- (BOOL)useBonjour;
- (BOOL)useUDP;

@end
