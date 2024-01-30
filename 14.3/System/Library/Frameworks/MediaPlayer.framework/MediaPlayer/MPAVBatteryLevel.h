@class NSNumber;

@interface MPAVBatteryLevel : NSObject

@property (readonly, nonatomic) NSNumber *leftPercentage;
@property (readonly, nonatomic) NSNumber *rightPercentage;
@property (readonly, nonatomic) NSNumber *singlePercentage;
@property (readonly, nonatomic) NSNumber *casePercentage;

- (void).cxx_destruct;
- (id)initWithRouteDescription:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithOutputDevice:(void *)a0;

@end
