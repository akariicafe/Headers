@interface PFLTaskStateFinished : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (unsigned long long)tag;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
