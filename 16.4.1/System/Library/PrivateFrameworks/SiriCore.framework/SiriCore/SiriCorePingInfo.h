@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying> {
    NSMapTable *_outstandingPings;
}

@property (readonly, nonatomic) long long pingAcknowledgedCount;
@property (readonly, nonatomic) double avgPingTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)markPingSentWithIndex:(long long)a0;
- (void)markPongReceivedWithIndex:(long long)a0;
- (unsigned long long)numberOfUnacknowledgedPings;

@end
