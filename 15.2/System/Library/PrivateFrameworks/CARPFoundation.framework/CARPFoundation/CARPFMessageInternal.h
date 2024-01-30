@class CARPFLogEventSession, NSUUID, NSString, CARPFActivity, CARPFMessageDestination, CARPFMessageTransport, NSDictionary;

@interface CARPFMessageInternal : CARPFObject <NSCopying>

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

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
