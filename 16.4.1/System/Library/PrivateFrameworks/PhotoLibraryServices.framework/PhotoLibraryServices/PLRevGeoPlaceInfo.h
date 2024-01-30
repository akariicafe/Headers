@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *placeName;
@property (readonly, nonatomic) BOOL hasArea;
@property (readonly, nonatomic) double minimumArea;
@property (readonly, nonatomic) double maximumArea;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addPlaceInfoArea:(double)a0;
- (id)initWithPlaceName:(id)a0;

@end
