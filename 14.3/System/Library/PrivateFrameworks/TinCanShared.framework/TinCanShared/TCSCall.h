@class NSString, TCSCallCenter, NSDate;

@interface TCSCall : NSObject <NSSecureCoding> {
    TCSCallCenter *_callCenter;
    BOOL _isNilCall;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isOutgoing;
@property (readonly, nonatomic) BOOL isIncoming;
@property (readonly, nonatomic) BOOL isRemoteUplinkMuted;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *handleValue;
@property (readonly, nonatomic) int status;
@property (readonly, copy, nonatomic) NSString *uniqueProxyIdentifier;
@property (readonly, nonatomic) int disconnectedReason;
@property (readonly, copy, nonatomic) NSDate *dateAnsweredOrDialed;
@property (readonly, copy, nonatomic) NSDate *dateConnected;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)setCallCenter:(id)a0;
- (id)description;
- (id)initWithCall:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCall:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setUplinkMuted:(BOOL)a0 completion:(id /* block */)a1;

@end
