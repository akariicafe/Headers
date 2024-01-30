@interface TLTimelineEntryNodeRecycleBin : NSObject

@property (readonly, nonatomic) unsigned long long numberOfRecycledNodes;
@property (readonly, nonatomic) unsigned long long maximumNumberOfRecycledNodes;

+ (id)sharedRecycleBin;

- (id)_init;
- (void)emptyRecycleBin;
- (void)recycleEntryNode:(id)a0;
- (id)retrieveRecycledEntryNode;

@end
