@class NSString;

@interface WAMobileData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *carrier;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *networkCode;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithCarrier:(id)a0 countryCode:(id)a1 networkCode:(id)a2;

@end
