@interface HMSoftwareUpdateProgress : HMFObject

@property (readonly) float percentageComplete;
@property (readonly) double estimatedTimeRemaining;

+ (id)progressFromEvent:(id)a0;

- (id)initWithPercentageComplete:(float)a0 estimatedTimeRemaining:(double)a1;
- (id)initWithProtoPayload:(id)a0;
- (id)protoPayload;

@end
