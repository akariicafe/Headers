@class NSError;

@interface PFLTaskStateError : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (unsigned long long)tag;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
