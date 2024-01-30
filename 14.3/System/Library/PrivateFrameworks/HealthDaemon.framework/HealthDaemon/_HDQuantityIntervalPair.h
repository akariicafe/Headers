@class NSUUID;

@interface _HDQuantityIntervalPair : NSObject

@property (readonly, nonatomic) double startInterval;
@property (readonly, nonatomic) double endInterval;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithStartInterval:(double)a0 endInterval:(double)a1 uuid:(id)a2;

@end
