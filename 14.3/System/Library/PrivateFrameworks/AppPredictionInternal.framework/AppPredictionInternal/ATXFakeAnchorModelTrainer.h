@class NSString, NSMutableArray, NSMutableDictionary;

@interface ATXFakeAnchorModelTrainer : NSObject <ATXAnchorModelTrainerProtocol> {
    NSMutableDictionary *_trainingResultsForAnchor;
}

@property (readonly, nonatomic) BOOL trained;
@property (readonly, nonatomic) NSMutableArray *trainedAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)trainAnchorModel:(id)a0;
- (void)train;
- (void)setTrainingResultsForAnchor:(id)a0 results:(id)a1;

@end
