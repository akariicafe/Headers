@class NSString;

@interface ARPRoutePrediction : NSObject

@property (readonly, copy, nonatomic) NSString *outputDeviceID;
@property (readonly, nonatomic) double confidence;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputDeviceID:(id)a0 confidence:(double)a1;

@end
