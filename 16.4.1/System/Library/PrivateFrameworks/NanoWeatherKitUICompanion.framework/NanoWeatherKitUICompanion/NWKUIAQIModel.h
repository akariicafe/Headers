@class NSString, UIColor, NSDate;

@interface NWKUIAQIModel : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *label;
@property (readonly) NSString *categoryDescription;
@property (readonly) UIColor *color;
@property (readonly) NSDate *date;
@property (readonly) NSDate *expiration;

- (void).cxx_destruct;
- (id)initWithAirQualityConditions:(id)a0 color:(id)a1;
- (id)initWithName:(id)a0 label:(id)a1 categoryDescription:(id)a2 color:(id)a3 date:(id)a4 expiration:(id)a5;

@end
