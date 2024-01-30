@class NSUUID, NSString, NSData, HMDHomeKitVersion;

@interface HMDRemoteMessage : HMFMessage

@property (retain, nonatomic) HMDHomeKitVersion *sourceVersion;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSUUID *transactionIdentifier;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (nonatomic) unsigned long long restriction;
@property (copy, nonatomic) NSString *attributedMessageName;
@property (retain, nonatomic) NSData *logEventSessionData;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long sendOptions;

+ (id)secureMessageWithName:(id)a0 destination:(id)a1 messagePayload:(id)a2;
+ (id)secureMessageWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 messagePayload:(id)a3;
+ (id)secureMessageWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 messagePayload:(id)a3 restriction:(unsigned long long)a4;
+ (id)messageWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 messagePayload:(id)a3 restriction:(unsigned long long)a4;

- (void)setResponseHandler:(id /* block */)a0;
- (BOOL)isRemote;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithName:(id)a0 destination:(id)a1 payload:(id)a2;
- (id)initWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 payload:(id)a3;
- (id)initWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 payload:(id)a3 type:(long long)a4 timeout:(double)a5 secure:(BOOL)a6;
- (id)initWithName:(id)a0 destination:(id)a1 payload:(id)a2 type:(long long)a3 timeout:(double)a4 secure:(BOOL)a5;
- (void)setInternalResponseHandler:(id /* block */)a0;
- (id)initWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 userInfo:(id)a3 headers:(id)a4 payload:(id)a5;
- (id)initWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 payload:(id)a3 type:(long long)a4 timeout:(double)a5 secure:(BOOL)a6 restriction:(unsigned long long)a7;
- (id)initWithName:(id)a0 destination:(id)a1 payload:(id)a2 type:(long long)a3 timeout:(double)a4 secure:(BOOL)a5 restriction:(unsigned long long)a6;
- (id)createActivityForLogSession;
- (id)initWithName:(id)a0 qualityOfService:(long long)a1 destination:(id)a2 payload:(id)a3 type:(long long)a4 timeout:(double)a5 secure:(BOOL)a6 restriction:(unsigned long long)a7 sendOptions:(unsigned long long)a8;

@end
