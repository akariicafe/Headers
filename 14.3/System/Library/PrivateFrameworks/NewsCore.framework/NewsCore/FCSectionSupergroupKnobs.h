@class NSString;

@interface FCSectionSupergroupKnobs : NSObject

@property (nonatomic) BOOL isEligible;
@property (readonly, nonatomic) NSString *nameOverride;
@property (readonly, nonatomic) double rankMultiplier;

- (void).cxx_destruct;
- (id)initWithJSONData:(id)a0;
- (id)initWithJSONString:(id)a0;

@end
