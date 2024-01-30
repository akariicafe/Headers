@class IDSProtobuf, NSString, NSDictionary, NSObject, IDSService;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NPKIDSHeartbeat : NSObject

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) IDSProtobuf *pendingStatusProtobuf;
@property (nonatomic) long long messagePriority;
@property (copy, nonatomic) NSString *responseIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *statusTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *sendOptions;
@property (nonatomic) unsigned long long updatesSent;
@property (nonatomic) unsigned long long maxUpdates;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_sendHeartbeat;
- (id)initWithPendingStatusProtobuf:(id)a0 service:(id)a1 priority:(long long)a2 maxUpdates:(unsigned long long)a3 responseIdentifier:(id)a4 sendOptions:(id)a5 queue:(id)a6;
- (id)initWithPendingStatusProtobuf:(id)a0 service:(id)a1 priority:(long long)a2 maxUpdates:(unsigned long long)a3 responseIdentifier:(id)a4 sendOptions:(id)a5 queue:(id)a6 updateInterval:(double)a7;

@end
