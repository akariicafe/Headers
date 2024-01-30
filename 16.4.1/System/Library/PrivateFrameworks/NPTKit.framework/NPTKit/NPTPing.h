@class NSObject, NSString, NPTPingResult, SimplePing, NSMutableArray;
@protocol OS_nw_activity;

@interface NPTPing : NSObject <NSSecureCoding, SimplePingDelegate, NSCopying> {
    SimplePing *pinger;
    unsigned long long pingCount;
    NSMutableArray *pings;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *pingActivity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTPingResult *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)simplePing:(id)a0 didFailToSendPacket:(id)a1 sequenceNumber:(unsigned short)a2 error:(id)a3;
- (void)simplePing:(id)a0 didStartWithAddress:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNetworkActivityParent:(id)a0;
- (id)initWithNetworkActivityParent:(id)a0 pingTarget:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)startWithNumberOfPings:(unsigned long long)a0 forcingIPv4:(BOOL)a1 forcingIPv6:(BOOL)a2;
- (void)simplePing:(id)a0 didReceiveUnexpectedPacket:(id)a1;
- (void)startWithNumberOfPings:(unsigned long long)a0 forcingIPv4:(BOOL)a1 forcingIPv6:(BOOL)a2 completion:(id /* block */)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void)sendPing;
- (void)simplePing:(id)a0 didSendPacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)stop;
- (void)simplePing:(id)a0 didTimeOut:(id)a1 sequenceNumber:(unsigned short)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)simplePing:(id)a0 didFailWithError:(id)a1;
- (void)simplePing:(id)a0 didReceivePingResponsePacket:(id)a1 sequenceNumber:(unsigned short)a2;

@end
