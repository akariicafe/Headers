@class NSString, MLModel, NSObject;
@protocol OS_dispatch_queue;

@interface PPSocialHighlightMLScorer : NSObject <PPSocialHighlightScorer> {
    MLModel *_model;
    NSObject<OS_dispatch_queue> *_modelQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)scoreSocialHighlight:(id)a0;

@end
