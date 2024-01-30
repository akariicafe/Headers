@class NSString, CLLocation;

@interface SQRegion : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *countryCode;
@property (retain, nonatomic) CLLocation *location;
@property (readonly, nonatomic) long long magnitude;

+ (id)regionWithIdentifier:(id)a0;

- (void).cxx_destruct;

@end
