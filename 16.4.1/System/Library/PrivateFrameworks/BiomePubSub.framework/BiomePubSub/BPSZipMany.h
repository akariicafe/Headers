@class NSArray;

@interface BPSZipMany : BPSPublisher

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (void)subscribe:(id)a0;
- (id)initWithPublishers:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
