@class NSSet, PKCurrencyAmount;

@interface PKMapsTransitRouteInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *transitNetworkIdentifiers;
@property (readonly, nonatomic) PKCurrencyAmount *cost;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTransitNetworkIdentifiers:(id)a0 cost:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
