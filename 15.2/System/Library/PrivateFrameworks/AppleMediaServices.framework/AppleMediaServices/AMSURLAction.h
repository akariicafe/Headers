@class NSURL, AMSDialogResult, NSDictionary, AMSAuthenticateResult, NSData, NSString, NSError;

@interface AMSURLAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSAuthenticateResult *authenticateResult;
@property (retain, nonatomic) AMSDialogResult *dialogResult;
@property (retain, nonatomic) NSDictionary *updatedHeaders;
@property (retain, nonatomic) NSData *updatedBody;
@property (retain, nonatomic) NSString *updatedMethod;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSURL *redirectURL;
@property (retain, nonatomic) NSString *retryIdentifier;

+ (id)retryAction;
+ (id)redirectActionWithURL:(id)a0;
+ (id)proceedAction;
+ (id)actionWithError:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithType:(long long)a0 error:(id)a1 reason:(id)a2 redirectURL:(id)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;

@end
