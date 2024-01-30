@class NSArray, NSMutableArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {
    NSMutableArray *_directions;
    BOOL _good;
    BOOL _hov;
    BOOL _preferred;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasDirections;
@property (readonly, nonatomic) NSArray *directions;
@property (readonly, nonatomic) BOOL isLaneForManeuver;
@property (readonly, nonatomic) BOOL isHOVLane;
@property (readonly, nonatomic) BOOL isPreferredLaneForManeuver;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLaneInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
