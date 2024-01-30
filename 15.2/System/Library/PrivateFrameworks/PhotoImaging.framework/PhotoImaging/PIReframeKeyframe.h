@class NSDictionary;

@interface PIReframeKeyframe : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } homography;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)keyframesFromDictionaryRepresentations:(id)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 homography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;

@end
