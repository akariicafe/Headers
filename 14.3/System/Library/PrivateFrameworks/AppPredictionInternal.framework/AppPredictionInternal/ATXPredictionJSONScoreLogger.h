@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ATXPredictionJSONScoreLogger : NSObject <ATXPredictionScoreLogger> {
    NSMutableDictionary *_history;
    unsigned char _consumerSubType;
    NSMutableArray *_subscoreHistories;
    NSObject<OS_dispatch_queue> *_fastQueue;
    NSObject<OS_dispatch_queue> *_slowQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (void)setAssetVersion:(unsigned long long)a0;
- (void)flushWithCompletion:(id /* block */)a0;
- (void)setConsumerSubType:(unsigned char)a0;
- (void)setCacheAge:(double)a0;
- (void)logInputDict:(id)a0 subscores:(id)a1 forBundleId:(id)a2;
- (void)flushWithCompletion:(id /* block */)a0 filenameSuffix:(id)a1;
- (void)logInputs:(id)a0 subscores:(id)a1 forBundleId:(id)a2;
- (void)setPredictionClass:(id)a0;
- (void)logStageScores:(id)a0 forStageType:(long long)a1;
- (void)flushWithFilenameSuffix:(id)a0;

@end
