@class NSArray, NSString;

@interface ATXFakeAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol>

@property (readonly, nonatomic) NSArray *forwardedPredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)forwardPredictions:(id)a0;

@end
