@class GEOTimeCheckpoints;

@interface _GEOComposedETARouteStep : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long stepID;
@property (nonatomic) double travelDuration;
@property (nonatomic) double length;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithPrecision:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
