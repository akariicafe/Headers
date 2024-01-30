@class NSString, NSDictionary, NSData, AKPushMessage;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKPushMessage *responseMessage;
@property (retain, nonatomic) NSDictionary *responseInfo;
@property (nonatomic) unsigned long long circleStep;
@property (retain, nonatomic) NSString *serverInfo;
@property (retain, nonatomic) NSData *clientInfo;
@property (nonatomic) long long clientErrorCode;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *transactionId;

+ (id)payloadWithMessage:(id)a0;

- (BOOL)isRequestingPayload;
- (BOOL)isAcceptingPayload;
- (id)replyPayload;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
