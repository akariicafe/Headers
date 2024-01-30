@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {
    NSNumber *_sizeInBytes;
}

- (id)payload;
- (id)initWithContainerIdentifier:(id)a0;
- (void)dealloc;

@end
