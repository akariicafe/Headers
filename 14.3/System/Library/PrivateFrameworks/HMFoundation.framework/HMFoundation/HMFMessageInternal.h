@class HMFActivity, NSUUID, NSString, NSDictionary, HMFLogEventSession, HMFMessageDestination, HMFMessageTransport;

@interface HMFMessageInternal : HMFObject <NSCopying>

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
@property (retain, nonatomic) HMFLogEventSession *logEventSession;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
