@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXInspectionServerPredictionScoreLogger : NSObject <ATXPredictionScoreLogger> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_inputsAndSubscores;
    NSMutableDictionary *_stageScores;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setAssetVersion:(unsigned long long)a0;
- (void)setCacheAge:(double)a0;
- (void)logInputDict:(id)a0 subscores:(id)a1 forBundleId:(id)a2;
- (void)logInputs:(id)a0 subscores:(id)a1 forBundleId:(id)a2;
- (void)setPredictionClass:(id)a0;
- (void)logStageScores:(id)a0 forStageType:(long long)a1;
- (id)inputsAndSubscores;
- (id)stageScores;

@end
