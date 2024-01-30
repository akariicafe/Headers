@class NSString, NSArray;

@interface MFConnectionSettings : NSObject <NSCopying> {
    struct __CFString { } *_connectionServiceType;
}

@property (copy, nonatomic) NSString *certUIService;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (nonatomic) unsigned int portNumber;
@property (nonatomic) BOOL usesSSL;
@property (nonatomic) BOOL usesOpportunisticSockets;
@property (nonatomic) BOOL tryDirectSSL;
@property (nonatomic) BOOL allowsTrustPrompt;
@property (nonatomic) BOOL isNonAppInitiated;

- (id)description;
- (void)setConnectionServiceType:(struct __CFString { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct __CFString { } *)connectionServiceType;

@end
