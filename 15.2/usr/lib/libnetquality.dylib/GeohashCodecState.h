@class CoordinateApproximation;

@interface GeohashCodecState : NSObject

@property (retain) CoordinateApproximation *latitude;
@property (retain) CoordinateApproximation *longitude;

+ (id)new;

- (id)description;
- (void).cxx_destruct;

@end
