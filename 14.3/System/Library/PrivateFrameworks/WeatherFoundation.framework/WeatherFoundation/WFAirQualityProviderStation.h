@class CLLocation, NSDate;

@interface WFAirQualityProviderStation : NSObject

@property (readonly, nonatomic) NSDate *lastReadDate;
@property (readonly, nonatomic) CLLocation *location;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 lastReadDate:(id)a1;
- (id)description;

@end
