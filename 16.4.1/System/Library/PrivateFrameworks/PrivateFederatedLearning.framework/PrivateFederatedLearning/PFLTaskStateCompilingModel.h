@class NSURL;

@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *modelURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (unsigned long long)tag;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
