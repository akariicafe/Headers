@class NSUUID, NSString, NSNumber;

@interface HMDXPCMessageCountersLogEvent : HMDLogEvent

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *peerInformation;
@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSNumber *count;

+ (id)XPCMessageCountersLogEventWithType:(id)a0 peerInformation:(id)a1 messageName:(id)a2 count:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)__initWithType:(id)a0 peerInformation:(id)a1 messageName:(id)a2 count:(id)a3;

@end
