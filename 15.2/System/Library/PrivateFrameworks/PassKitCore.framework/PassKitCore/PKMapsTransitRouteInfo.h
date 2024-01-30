@class NSSet, PKCurrencyAmount;

@interface PKMapsTransitRouteInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *transitNetworkIdentifiers;
@property (readonly, nonatomic) PKCurrencyAmount *cost;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTransitNetworkIdentifiers:(id)a0 cost:(id)a1;

@end
