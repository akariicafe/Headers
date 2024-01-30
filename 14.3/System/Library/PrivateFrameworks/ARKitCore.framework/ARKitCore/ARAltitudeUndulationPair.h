@interface ARAltitudeUndulationPair : NSObject

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double undulation;
@property (readonly, nonatomic) BOOL lookupFailed;

- (id)initWithAltitude:(double)a0 undulation:(double)a1 lookupFailed:(BOOL)a2;

@end
