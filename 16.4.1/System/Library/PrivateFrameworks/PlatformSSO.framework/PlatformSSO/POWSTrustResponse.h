@class NSString, NSDate;

@interface POWSTrustResponse : NSObject

@property (retain, nonatomic) NSString *securityExtensionPrefix;
@property (nonatomic, getter=isFault) BOOL fault;
@property (retain, nonatomic) NSString *faultReason;
@property (retain, nonatomic) NSString *faultCodeValue;
@property (retain, nonatomic) NSString *faultSubCodeValue;
@property (retain, nonatomic) NSString *endpointURN;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *assertion;
@property (retain, nonatomic) NSString *keyIdentifier;
@property (retain, nonatomic) NSString *tokenType;
@property (retain, nonatomic) NSDate *created;
@property (retain, nonatomic) NSDate *expires;
@property (retain, nonatomic) NSDate *tokenExpires;

- (void).cxx_destruct;
- (BOOL)isCredentialFault;

@end
