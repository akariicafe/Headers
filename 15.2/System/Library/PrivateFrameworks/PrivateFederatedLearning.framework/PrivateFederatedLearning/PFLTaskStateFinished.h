@interface PFLTaskStateFinished : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)tag;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
