@class NSArray, NSDictionary;
@protocol NLParameterTuningDelegate;

@interface NLParameterTuner : NSObject

@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSArray *parameterNames;
@property (readonly, copy) NSDictionary *options;
@property (readonly, weak) id<NLParameterTuningDelegate> delegate;

+ (id)parameterTunerWithParameters:(id)a0 options:(id)a1 delegate:(id)a2;
+ (id)tunedParameterBundleWithParameters:(id)a0 options:(id)a1 delegate:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)tunedParameterBundleWithError:(id *)a0;
- (id)initWithParameters:(id)a0 options:(id)a1 delegate:(id)a2;
- (id)_hyperTuneParameterArray;

@end
