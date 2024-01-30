@class BMContentStream, NSMutableArray, NSMutableSet;
@protocol BMBookmark;

@interface HVQueueGuardedData : NSObject

@property (readonly, nonatomic) NSMutableArray *memoryStorage;
@property (readonly, nonatomic) short memoryStorageLimit;
@property (nonatomic) BOOL isMemoryStorageFull;
@property (readonly, nonatomic) NSMutableSet *dequeuedMemoryContentIdentifiers;
@property (readonly, nonatomic) BMContentStream *diskStorage;
@property (retain, nonatomic) id<BMBookmark> diskStorageBookmark;
@property (nonatomic) unsigned char bookmarkLevelOfService;
@property (readonly, nonatomic) NSMutableSet *dequeuedDiskContentIdentifiers;
@property (nonatomic) unsigned int enqueuedCount;
@property (nonatomic) unsigned int dequeuedCount;

- (void).cxx_destruct;

@end
