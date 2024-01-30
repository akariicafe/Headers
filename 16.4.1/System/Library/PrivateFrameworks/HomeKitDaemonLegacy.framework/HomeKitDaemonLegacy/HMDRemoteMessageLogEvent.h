@class NSString;

@interface HMDRemoteMessageLogEvent : HMMLogEvent

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) BOOL sending;
@property (readonly, copy, nonatomic) NSString *msgIdentifier;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) BOOL secure;
@property (readonly, nonatomic) NSString *msgName;
@property (readonly, nonatomic) long long msgType;
@property (readonly, nonatomic) NSString *peerInformation;
@property (readonly, nonatomic) long long msgQoS;

+ (id)receivedRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 messageQoS:(long long)a7;
+ (id)receivedRemoteMessage:(id)a0 transportType:(int)a1;
+ (id)sendingRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 messageQoS:(long long)a7;
+ (id)sendingRemoteMessage:(id)a0 transportType:(int)a1;

- (void).cxx_destruct;
- (id)initWithRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 sending:(BOOL)a7 messageQoS:(long long)a8;

@end
