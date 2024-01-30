@class PFLModelHandler, NSArray, NSDictionary, NSURL, NSNumber;

@interface PFLTaskStateTraining : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *compiledModelURL;
@property (readonly, nonatomic) PFLModelHandler *modelHandler;
@property (readonly, nonatomic) NSArray *trainingIndicies;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSNumber *numValidationSamples;

- (unsigned long long)tag;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)resume:(id)a0 completion:(id /* block */)a1;
- (id)initWithCompiledModelURL:(id)a0 modelHandler:(id)a1 trainingDataIndicies:(id)a2 metrics:(id)a3 numValidationSamples:(id)a4;

@end
