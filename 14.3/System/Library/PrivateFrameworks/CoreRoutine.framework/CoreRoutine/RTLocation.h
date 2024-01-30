@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double horizontalUncertainty;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double uncertainty;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double verticalUncertainty;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int referenceFrame;

- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 altitude:(double)a3 verticalUncertainty:(double)a4 date:(id)a5 referenceFrame:(int)a6 speed:(double)a7;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 date:(id)a3;
- (id)init;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 horizontalUncertainty:(double)a2 date:(id)a3 referenceFrame:(int)a4;
- (id)coordinateToString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setUncertainty:(double)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
