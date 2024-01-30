@class AMSDialogResult, NSDictionary, AMSAuthenticateResult, NSError, NSString, NSURL;

@interface AMSURLAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSAuthenticateResult *authenticateResult;
@property (retain, nonatomic) AMSDialogResult *dialogResult;
@property (retain, nonatomic) NSDictionary *updatedHeaders;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSURL *redirectURL;
@property (retain, nonatomic) NSString *retryIdentifier;

+ (id)redirectActionWithURL:(id)a0;
+ (id)proceedAction;
+ (id)retryAction;
+ (id)actionWithError:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)description;
- (id)initWithType:(long long)a0 error:(id)a1 reason:(id)a2 redirectURL:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
