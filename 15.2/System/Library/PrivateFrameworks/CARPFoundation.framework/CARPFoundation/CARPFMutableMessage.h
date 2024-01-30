@class CARPFLogEventSession, NSUUID, NSString, CARPFActivity, CARPFMessageDestination, CARPFMessageTransport, NSDictionary;

@interface CARPFMutableMessage : CARPFMessage

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double timeout;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) CARPFMessageDestination *destination;
@property (weak, nonatomic) CARPFMessageTransport *transport;
@property (retain, nonatomic) CARPFActivity *activity;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (retain, nonatomic) CARPFLogEventSession *logEventSession;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)setHeaders:(id)a0;
- (void)setTransport:(id)a0;
- (void)setActivity:(id)a0;
- (void)setName:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setQualityOfService:(long long)a0;
- (void)setTimeout:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserInfoValue:(id)a0 forKey:(id)a1;
- (void)setHeaderValue:(id)a0 forKey:(id)a1;
- (void)setUserInfo:(id)a0;

@end
