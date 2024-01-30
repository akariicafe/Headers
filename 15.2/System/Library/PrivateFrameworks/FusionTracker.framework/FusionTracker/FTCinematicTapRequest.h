@class NSDictionary;

@interface FTCinematicTapRequest : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } tapPoint;
@property (nonatomic) long long trackId;
@property (retain, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)init;

@end
