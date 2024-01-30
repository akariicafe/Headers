@class NSURL, NSArray;

@interface PFLTaskStateCollectingMetrics : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *compiledModelURL;
@property (readonly, nonatomic) NSArray *validationIndicies;
@property (readonly, nonatomic) NSArray *trainingIndicies;

- (unsigned long long)tag;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)resume:(id)a0 completion:(id /* block */)a1;
- (id)initWithCompiledModelURL:(id)a0 validationDataIndicies:(id)a1 trainingDataIndicies:(id)a2;

@end
