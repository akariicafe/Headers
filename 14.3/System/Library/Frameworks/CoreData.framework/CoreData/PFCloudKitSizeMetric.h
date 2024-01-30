@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric

@property (readonly, nonatomic) NSNumber *sizeInBytes;

- (id)payload;
- (void)dealloc;
- (void)addByteSize:(unsigned long long)a0;
- (id)initWithContainerIdentifier:(id)a0;

@end
