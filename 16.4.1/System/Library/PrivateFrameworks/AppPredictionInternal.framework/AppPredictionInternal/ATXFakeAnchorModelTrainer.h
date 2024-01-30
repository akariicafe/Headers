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
- (id)trainAnchorModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setTrainingResultsForAnchor:(id)a0 results:(id)a1;

@end
