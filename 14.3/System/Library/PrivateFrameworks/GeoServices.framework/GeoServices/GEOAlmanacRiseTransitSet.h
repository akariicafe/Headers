@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {
    struct CAARiseTransitSetDetails2 { int type; double JD; double Bearing; double GeometricAltitude; BOOL bAboveHorizon; } _rise;
    struct CAARiseTransitSetDetails2 { int type; double JD; double Bearing; double GeometricAltitude; BOOL bAboveHorizon; } _transit;
    struct CAARiseTransitSetDetails2 { int type; double JD; double Bearing; double GeometricAltitude; BOOL bAboveHorizon; } _set;
}

@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) NSDate *transit;
@property (readonly, nonatomic) NSDate *set;
@property (readonly, nonatomic) BOOL transitIsAboveHorizon;
@property (readonly, nonatomic) BOOL isIdeal;
@property (readonly, nonatomic) struct CAARiseTransitSetDetails2 { int x0; double x1; double x2; double x3; BOOL x4; } firstItem;
@property (readonly, nonatomic) struct CAARiseTransitSetDetails2 { int x0; double x1; double x2; double x3; BOOL x4; } lastItem;

- (id)description;
- (id).cxx_construct;
- (id)initWithRise:(const struct CAARiseTransitSetDetails2 { int x0; double x1; double x2; double x3; BOOL x4; } *)a0 transit:(const struct CAARiseTransitSetDetails2 { int x0; double x1; double x2; double x3; BOOL x4; } *)a1 set:(const struct CAARiseTransitSetDetails2 { int x0; double x1; double x2; double x3; BOOL x4; } *)a2;

@end
