@class NSString;

@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo> {
    id _pingHandler;
}

@property (copy, nonatomic) NSString *sectionID;
@property (nonatomic) BOOL forBulletin;
@property (nonatomic) BOOL forNotification;
@property (nonatomic) unsigned long long ackType;
@property (readonly, nonatomic) BOOL canAck;
@property (readonly, nonatomic) BOOL canAckOnLocalConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pingWithBulletin:(id)a0 notification:(id)a1 ack:(id /* block */)a2;
- (void)_performPingWithAckableForwardBlock:(id /* block */)a0 ackableNoParametersBlock:(id /* block */)a1 noAckBlock:(id /* block */)a2 clientAck:(id /* block */)a3;
- (id)initWithPingHandler:(id)a0;
- (id)init;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1 ack:(id /* block */)a2;
- (void)pingWithBulletin:(id)a0 ack:(id /* block */)a1;
- (void).cxx_destruct;

@end
