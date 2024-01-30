@class NSData, NSString, NSNumber;

@interface STSVASTransaction : STSAuxiliaryTransaction

@property (readonly, nonatomic) NSData *merchantId;
@property (readonly, nonatomic) NSString *signupUrl;
@property (readonly, nonatomic) NSNumber *terminalAppVersion;
@property (readonly, nonatomic) long long terminalMode;

+ (BOOL)supportsSecureCoding;
+ (id)vasTransactionForCredential:(id)a0 withDictionary:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForCredential:(id)a0 withDictionary:(id)a1;
- (id)vasCredential;

@end
