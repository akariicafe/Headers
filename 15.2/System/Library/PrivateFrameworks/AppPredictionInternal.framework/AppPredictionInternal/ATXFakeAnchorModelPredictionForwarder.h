@class NSArray, NSString;

@interface ATXFakeAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol>

@property (readonly, nonatomic) NSArray *forwardedPredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardPredictions:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
