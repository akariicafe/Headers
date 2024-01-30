@class NSUUID, NSDate;

@interface MNDisplayETAInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long displayRemainingMinutesToEndOfLeg;
@property (retain, nonatomic) NSDate *displayETAToEndOfLeg;
@property (nonatomic) unsigned long long displayRemainingMinutesToEndOfRoute;
@property (retain, nonatomic) NSDate *displayETAToEndOfRoute;
@property (retain, nonatomic) NSUUID *routeID;
@property (nonatomic) unsigned long long legIndex;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDisplayETAToEndOfLeg:(id)a0 displayRemainingMinutesToEndOfLeg:(unsigned long long)a1 displayETAToEndOfRoute:(id)a2 displayRemainingMinutesToEndOfRoute:(unsigned long long)a3;
- (id)initWithDisplayETAToEndOfLeg:(id)a0 displayRemainingMinutesToEndOfLeg:(unsigned long long)a1 forLegIndex:(unsigned long long)a2 displayETAToEndOfRoute:(id)a3 displayRemainingMinutesToEndOfRoute:(unsigned long long)a4 forRouteID:(id)a5;
- (BOOL)_isDisplayDate:(id)a0 equalToDisplayDate:(id)a1;

@end
