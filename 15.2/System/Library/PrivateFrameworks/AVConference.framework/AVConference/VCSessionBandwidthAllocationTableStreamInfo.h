@class NSMutableArray, NSMutableDictionary;

@interface VCSessionBandwidthAllocationTableStreamInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *sortedEntries;
@property (readonly, nonatomic) NSMutableDictionary *qualityIndexToTableEntry;

- (id)init;
- (void)dealloc;
- (BOOL)addTableEntry:(id)a0;
- (id)entryForQualityIndex:(unsigned int)a0;

@end
