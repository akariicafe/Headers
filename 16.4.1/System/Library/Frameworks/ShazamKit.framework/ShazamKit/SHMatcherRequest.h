@class SHSignature, NSUUID, NSString, NSDate;

@interface SHMatcherRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *requestID;
@property (readonly, nonatomic) SHSignature *signature;
@property (readonly, nonatomic) NSDate *deadline;
@property (readonly, nonatomic) BOOL hasHitDeadline;
@property (readonly, copy, nonatomic) NSString *installationID;
@property (readonly, nonatomic) BOOL sendNotifications;
@property (readonly, nonatomic) long long stopCondition;
@property (readonly, nonatomic) long long type;

+ (id)requestOnceWithNotifications:(BOOL)a0;
+ (id)requestSignatureGenerationOnce;
+ (id)requestSignatureGenerationUntilDeadline:(id)a0;
+ (id)requestToMatchSignature:(id)a0 installationID:(id)a1 sendNotifications:(BOOL)a2;
+ (id)requestToMatchUntilDeadline:(id)a0 sendNotifications:(BOOL)a1;
+ (id)requestUntilMatchWithNotifications:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSignature:(id)a0 deadline:(id)a1 installationID:(id)a2 sendNotifications:(BOOL)a3 stopCondition:(long long)a4 requestType:(long long)a5;
- (id)initWithSignature:(id)a0 deadline:(id)a1 sendNotifications:(BOOL)a2 stopCondition:(long long)a3 requestType:(long long)a4;

@end
