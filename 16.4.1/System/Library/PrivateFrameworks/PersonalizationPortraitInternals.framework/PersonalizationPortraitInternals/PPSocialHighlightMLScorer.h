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

+ (id)_scorerFromModelFactorName:(id)a0;
+ (id)_oneHotEncodeString:(id)a0 columns:(id)a1 prefix:(id)a2;
+ (id)variantEncodingForVariant:(id)a0;
+ (id)clientEncodingForClientId:(id)a0 applicationIdentifiers:(id)a1;
+ (id)sharedFirstPassInstance;
+ (id)_singleItemMultiArrayValueWithConstantValue:(double)a0;
+ (id)sharedTopKInstance;

- (id)initWithModel:(id)a0;
- (double)scoreSocialHighlight:(id)a0;
- (void).cxx_destruct;

@end
