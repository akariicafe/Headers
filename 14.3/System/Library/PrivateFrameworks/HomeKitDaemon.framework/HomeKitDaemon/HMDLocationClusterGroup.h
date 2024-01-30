@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : NSObject

@property (retain, nonatomic) CLLocation *center;
@property (retain, nonatomic) NSMutableArray *locations;

+ (id)groupWithCenter:(id)a0;

- (void).cxx_destruct;

@end
