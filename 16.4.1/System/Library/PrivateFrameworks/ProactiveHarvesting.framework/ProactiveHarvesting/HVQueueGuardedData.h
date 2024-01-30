@class BMContentStream, _PASBloomFilterForWriting, NSMutableSet, NSMutableArray;
@protocol BMBookmark;

@interface HVQueueGuardedData : NSObject

@property (readonly, nonatomic) NSMutableArray *memoryStorage;
@property (readonly, nonatomic) short memoryStorageLimit;
@property (readonly, nonatomic) NSMutableSet *dequeuedMemoryContentIdentifiers;
@property (readonly, nonatomic) BMContentStream *diskStorage;
@property (retain, nonatomic) id<BMBookmark> diskStorageBookmark;
@property (nonatomic) unsigned char bookmarkLevelOfService;
@property (readonly, nonatomic) NSMutableSet *dequeuedDiskContentIdentifiers;
@property (retain, nonatomic) _PASBloomFilterForWriting *diskContentBloomFilter;
@property (nonatomic) unsigned int diskStorageEventCount;
@property (nonatomic) unsigned int enqueuedCount;
@property (nonatomic) unsigned int dequeuedCount;
@property (nonatomic) unsigned int bloomFilterHits;
@property (nonatomic) unsigned int bloomFilterMisses;
@property (nonatomic) unsigned int bloomFilterFalsePositives;

- (BOOL)isMemoryStorageFull;
- (void).cxx_destruct;

@end
