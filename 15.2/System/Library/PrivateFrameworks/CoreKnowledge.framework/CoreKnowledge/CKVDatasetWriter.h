@class CKVMutableDatasetInfo, NSURL, CKVMutableDatasetSegment, NSMutableArray;

@interface CKVDatasetWriter : NSObject {
    NSURL *_targetDir;
    CKVMutableDatasetInfo *_info;
    CKVMutableDatasetSegment *_segment;
    unsigned int _itemIndex;
    unsigned int _segmentIndex;
    NSMutableArray *_items;
    unsigned int _segmentSize;
    unsigned int _segmentBytes;
}

- (BOOL)finish;
- (BOOL)addItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDatasetRecord:(id)a0 targetDirectory:(id)a1 segmentSize:(unsigned int)a2 startTime:(unsigned long long)a3;
- (void)_resetSegment;
- (BOOL)_flushSegment;

@end
