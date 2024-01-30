@class NSDate;

@interface GEORerouteInfo : NSObject <NSSecureCoding> {
    double _distancePenalty;
    double _throttledReroutesPenalty;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double penalty;
@property (retain, nonatomic) NSDate *time;
@property (nonatomic) double distanceFromDestination;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateWithCurrentTime:(id)a0 location:(id)a1 isMostRecentReroute:(BOOL)a2 destinationCoordinate:(struct { double x0; double x1; })a3 numThrottledReroutes:(unsigned long long)a4;

@end
