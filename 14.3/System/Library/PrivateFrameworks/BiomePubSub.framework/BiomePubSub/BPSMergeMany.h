@class NSArray;

@interface BPSMergeMany : BPSPublisher

@property (readonly, nonatomic) NSArray *publishers;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0;

@end
