@class NSString, NSMeasurement;

@interface WFWeatherAirQualityPollutant : NSObject <WFNaming, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSMeasurement *concentration;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAirPollutant:(id)a0;

@end
