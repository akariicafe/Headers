@class NSString;

@interface ARPRoutePrediction : NSObject

@property (readonly, copy, nonatomic) NSString *outputDeviceID;
@property (readonly, nonatomic) double confidence;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOutputDeviceID:(id)a0 confidence:(double)a1;

@end
