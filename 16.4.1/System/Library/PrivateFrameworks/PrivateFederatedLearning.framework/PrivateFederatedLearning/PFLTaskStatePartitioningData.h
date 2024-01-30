@class NSURL;

@interface PFLTaskStatePartitioningData : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *compiledModelURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (unsigned long long)tag;
- (void).cxx_destruct;
- (id)initWithCompiledModelURL:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
