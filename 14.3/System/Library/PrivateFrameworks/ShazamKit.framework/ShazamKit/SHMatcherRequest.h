@class SHSignature, NSString, NSDate;

@interface SHMatcherRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SHSignature *signature;
@property (readonly, nonatomic) NSDate *deadline;
@property (readonly, nonatomic) BOOL hasHitDeadline;
@property (readonly, nonatomic) NSString *partnerName;
@property (readonly, nonatomic) NSString *installationID;
@property (readonly, nonatomic) BOOL sendNotifications;
@property (readonly, nonatomic) long long stopCondition;
@property (readonly, nonatomic) long long type;

+ (id)requestToMatchSignature:(id)a0 forPartner:(id)a1 installationID:(id)a2 sendNotifications:(BOOL)a3;
+ (id)requestToMatchUntilDeadline:(id)a0 forPartner:(id)a1 sendNotifications:(BOOL)a2;
+ (id)requestOnceForPartner:(id)a0 sendNotifications:(BOOL)a1;
+ (id)requestUntilMatchForPartner:(id)a0 sendNotifications:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSignature:(id)a0 deadline:(id)a1 partnerName:(id)a2 installationID:(id)a3 sendNotifications:(BOOL)a4 stopCondition:(long long)a5;
- (id)initWithSignature:(id)a0 deadline:(id)a1 partnerName:(id)a2 sendNotifications:(BOOL)a3 stopCondition:(long long)a4;

@end
