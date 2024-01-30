@class NSDictionary, NSString;
@protocol GEOServerFormattedString;

@interface MNGuidanceARInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) id<GEOServerFormattedString> instruction;
@property (readonly, nonatomic) NSDictionary *variableOverrides;
@property (readonly, nonatomic) NSString *arrowLabel;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } locationCoordinate;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int index; float offset; } start; struct { unsigned int index; float offset; } end; } locationCoordinateRange;
@property (readonly, nonatomic) NSString *maneuverRoadName;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) unsigned long long stepIndex;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithEventType:(int)a0 maneuverType:(int)a1 instruction:(id)a2 variableOverrides:(id)a3 arrowLabel:(id)a4 locationCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a5 maneuverRoadName:(id)a6 stepIndex:(unsigned long long)a7;
- (id)initWithEventType:(int)a0 maneuverType:(int)a1 instruction:(id)a2 variableOverrides:(id)a3 arrowLabel:(id)a4 locationCoordinate:(struct { double x0; double x1; double x2; })a5 maneuverRoadName:(id)a6 heading:(double)a7 stepIndex:(unsigned long long)a8;

@end
