@class HMFActivity, NSUUID, NSString, NSDictionary, HMFMessageDestination, HMFMessageTransport;

@interface HMFMutableMessage : HMFMessage

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double timeout;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) HMFMessageDestination *destination;
@property (weak, nonatomic) HMFMessageTransport *transport;
@property (retain, nonatomic) HMFActivity *activity;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)setQualityOfService:(long long)a0;
- (void)setHeaders:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setTransport:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimeout:(double)a0;
- (void)setUserInfo:(id)a0;
- (void)setName:(id)a0;
- (void)setActivity:(id)a0;
- (void)setHeaderValue:(id)a0 forKey:(id)a1;
- (void)setUserInfoValue:(id)a0 forKey:(id)a1;

@end
