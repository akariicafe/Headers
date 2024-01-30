@class NSError;

@interface PFLTaskStateError : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)tag;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
