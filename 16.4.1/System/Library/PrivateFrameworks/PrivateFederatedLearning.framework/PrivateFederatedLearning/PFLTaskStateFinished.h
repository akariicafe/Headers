@interface PFLTaskStateFinished : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (unsigned long long)tag;
- (id)init;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
