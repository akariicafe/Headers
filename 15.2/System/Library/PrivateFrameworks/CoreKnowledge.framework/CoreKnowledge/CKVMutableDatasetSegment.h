@class NSArray;

@interface CKVMutableDatasetSegment : CKVDatasetSegment

@property (nonatomic) unsigned int datasetId;
@property (nonatomic) unsigned int segmentId;
@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) unsigned int toIndex;
@property (copy, nonatomic) NSArray *items;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
