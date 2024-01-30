@class NSUUID;

@interface HMDUserActionPredictionSubscriber : NSObject

@property (readonly, copy) NSUUID *uuid;
@property (readonly) unsigned long long predictionLimit;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 predictionLimit:(unsigned long long)a1;

@end
