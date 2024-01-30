@class NSString, NSNumber;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSNumber *placeType;
@property (readonly, nonatomic) unsigned long long dominantOrderType;
@property (readonly, nonatomic) double areaInSquareMeters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 placeType:(id)a1 dominantOrderType:(unsigned long long)a2 areaInSquareMeters:(double)a3;

@end
