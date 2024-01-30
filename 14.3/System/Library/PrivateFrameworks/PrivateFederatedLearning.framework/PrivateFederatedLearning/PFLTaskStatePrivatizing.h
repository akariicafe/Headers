@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStatePrivatizing : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *diff;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSNumber *numValidationSamples;

- (void).cxx_destruct;
- (unsigned long long)tag;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;
- (id)initWithGradientDiff:(id)a0 metrics:(id)a1 numValidationSamples:(id)a2;

@end
