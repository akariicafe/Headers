@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *placeName;
@property (readonly, nonatomic) BOOL hasArea;
@property (readonly, nonatomic) double minimumArea;
@property (readonly, nonatomic) double maximumArea;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaceName:(id)a0;
- (void)addPlaceInfoArea:(double)a0;
- (void)encodeWithCoder:(id)a0;

@end
