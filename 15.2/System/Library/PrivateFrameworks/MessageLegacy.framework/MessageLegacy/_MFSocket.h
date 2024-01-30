@class NSArray, NSString, MFStream, NSData, NSCondition, NSInvocation;

@interface _MFSocket : NSObject {
    NSCondition *_condition;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString { } *_connectionServiceType;
    NSInvocation *_eventHandler;
    int _lowThroughputCounter;
    BOOL _socketCanRead;
    BOOL _socketCanWrite;
}

@property (retain) MFStream *stream;
@property (nonatomic) int timeout;
@property (nonatomic) BOOL allowsTrustPrompt;
@property (nonatomic) BOOL usesOpportunisticSockets;
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (readonly, nonatomic) NSArray *serverCertificates;
@property (readonly, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, nonatomic) NSData *sourceIPAddress;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isValid;

- (void)abort;
- (BOOL)connectToHost:(id)a0 withPort:(unsigned int)a1 service:(id)a2;
- (void)setEventHandler:(id)a0;
- (long long)writeBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)setConnectionServiceType:(struct __CFString { } *)a0;
- (id)init;
- (void)enableThroughputMonitoring:(BOOL)a0;
- (id)securityProtocol;
- (void)dealloc;
- (BOOL)setSecurityProtocol:(id)a0;
- (BOOL)_evaluateTrust:(struct __SecTrust { } *)a0 errorPtr:(id *)a1;
- (BOOL)_certificateIsTrustedForAccount:(id)a0;
- (void)_setCertificateIsTrusted:(BOOL)a0 forAccount:(id)a1;
- (BOOL)_waitForSocketOpenAndFlag:(BOOL *)a0;
- (id)_negotiatedProtocolVersion;
- (BOOL)_startSSLHandshakeWithProtocol:(id)a0 errorPtr:(id *)a1;
- (unsigned int)_bufferedByteCount;
- (long long)readBytes:(char *)a0 length:(unsigned long long)a1;

@end
