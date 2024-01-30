@class NSURL;

@interface PFLTaskStatePartitioningData : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *compiledModelURL;

- (unsigned long long)tag;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)resume:(id)a0 completion:(id /* block */)a1;
- (id)initWithCompiledModelURL:(id)a0;

@end
