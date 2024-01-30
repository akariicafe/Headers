@class NSArray, CAProcessDevicePair;

@interface CAActiveDeviceStreamsForProcess : NSObject

@property (readonly) CAProcessDevicePair *pair;
@property (readonly) NSArray *activeStreams;

- (void).cxx_destruct;
- (id)initWithProcessDevicePair:(id)a0 andActiveStreamArray:(id)a1;

@end
