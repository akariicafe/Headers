@class SAConnectionPolicyRoute, NSString, SAConnectionPolicy, NSURL, NSError;

@interface SiriCoreSiriConnectionInfo : NSObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL prefersWWAN;
@property (nonatomic) BOOL skipPeer;
@property (nonatomic) BOOL useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerErrorReason;
@property (nonatomic) BOOL forceReconnect;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) BOOL imposePolicyBan;
@property (nonatomic) BOOL requiresURLSession;
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, getter=isSiriServerLoggingEnabled) BOOL enableSiriServerLogging;

- (void).cxx_destruct;
- (id)description;
- (void)_appendPotentiallyNilString:(id)a0 toMutableString:(id)a1;

@end
