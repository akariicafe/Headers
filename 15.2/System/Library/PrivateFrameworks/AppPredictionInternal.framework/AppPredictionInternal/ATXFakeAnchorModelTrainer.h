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

- (void)train;
- (void).cxx_destruct;
- (id)init;
- (id)trainAnchorModel:(id)a0;
- (void)setTrainingResultsForAnchor:(id)a0 results:(id)a1;

@end
