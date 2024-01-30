@class NSString, NSDictionary, NSData, ACAccount, NSURL;

@interface AMSEngagementRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *modelData;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *clientData;
@property (retain, nonatomic) NSString *logKey;
@property (nonatomic) BOOL failOnDismiss;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (retain, nonatomic) NSURL *originatingURL;
@property (nonatomic) long long presentationStyle;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) BOOL silentlyCheckURL;
@property (nonatomic) long long destinationStyle;
@property (nonatomic) BOOL suppressInteractiveModalDismissal;

+ (id)engagementRequestWithDictionary:(id)a0;

- (id)initWithModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 destinationStyle:(long long)a1;
- (id)_accountFromDictionary:(id)a0;
- (long long)_engagementPresentationStyleFromDictionary:(id)a0;
- (id)initWithRequestDictionary:(id)a0;
- (id)modelForClass:(Class)a0 error:(id *)a1;

@end
