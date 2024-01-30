@class NSString, AMSKeychainOptions, LAContext, ACAccount, AMSProcessInfo, NSDictionary;
@protocol AMSBagProtocol;

@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, copy, nonatomic) NSString *challenge;
@property (readonly, copy, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic, getter=isDualAction) BOOL dualAction;
@property (readonly, nonatomic) AMSKeychainOptions *keychainOptions;
@property (readonly, nonatomic) struct __SecAccessControl { } *localAuthAccessControlRef;
@property (readonly, nonatomic) LAContext *localAuthContext;
@property (readonly, nonatomic) NSDictionary *localAuthOptions;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithAccount:(id)a0 clientInfo:(id)a1 challenge:(id)a2 options:(id)a3 error:(id *)a4;
- (id)_localAuthOptions;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
