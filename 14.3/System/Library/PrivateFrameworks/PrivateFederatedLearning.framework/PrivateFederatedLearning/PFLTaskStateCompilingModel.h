@class NSURL;

@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *modelURL;

- (void).cxx_destruct;
- (unsigned long long)tag;
- (id)initWithCoder:(id)a0;
- (id)initWithModelURL:(id)a0;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
