@class NSArray, RTLocation, NSString, NSDate;

@interface RTPlaceInferenceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fidelityPolicy;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *accessPoints;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long limit;
@property (readonly, nonatomic) BOOL useBackground;
@property (readonly, nonatomic) NSString *clientIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithinDistance:(double)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (id)initWithinDistance:(double)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 clientIdentifier:(id)a4;
- (id)initWithFidelityPolicy:(unsigned long long)a0 locations:(id)a1 accessPoints:(id)a2 distance:(double)a3 location:(id)a4 startDate:(id)a5 endDate:(id)a6 limit:(long long)a7 useBackground:(BOOL)a8 clientIdentifier:(id)a9;
- (id)initWithFidelityPolicy:(unsigned long long)a0 locations:(id)a1 accessPoints:(id)a2;
- (id)init;
- (id)initWithFidelityPolicy:(unsigned long long)a0 locations:(id)a1 accessPoints:(id)a2 clientIdentifier:(id)a3;
- (void).cxx_destruct;

@end
