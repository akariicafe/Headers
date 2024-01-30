@class NSArray;

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) double routingSessionTimeout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSessions:(id)a0 routingSessionTimeout:(double)a1;

@end
