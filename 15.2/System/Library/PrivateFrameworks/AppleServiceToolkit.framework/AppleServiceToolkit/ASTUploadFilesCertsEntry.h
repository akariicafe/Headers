@class NSString;

@interface ASTUploadFilesCertsEntry : NSObject

@property (retain, nonatomic) NSString *certString;
@property (retain, nonatomic) NSString *pubKeyDigest;
@property (retain, nonatomic) NSString *sigAlgo;

- (void).cxx_destruct;
- (id)initWithCert:(id)a0 andPubKeyDigest:(id)a1 andSigAlgo:(id)a2;

@end
