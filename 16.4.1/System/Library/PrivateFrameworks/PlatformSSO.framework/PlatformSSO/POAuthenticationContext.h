@class NSString, NSURL, NSURLSession;

@interface POAuthenticationContext : NSObject

@property (retain, nonatomic) NSString *serverNonce;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *apv;
@property (retain, nonatomic) NSURLSession *urlSession;
@property unsigned long long loginType;
@property (nonatomic) BOOL federated;
@property unsigned long long wsTrustVersion;
@property (retain, nonatomic) NSURL *wsTrustFederationMexURL;
@property (retain, nonatomic) NSURL *wsTrustFederationURL;
@property (retain, nonatomic) NSString *wsTrustFederationNonce;
@property (retain, nonatomic) NSString *tokenTypeNamespace;

- (id)init;
- (void).cxx_destruct;

@end
