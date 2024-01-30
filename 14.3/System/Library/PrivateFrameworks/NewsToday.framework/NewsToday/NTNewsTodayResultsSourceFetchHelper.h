@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject

@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors;
@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSectionQueueDescriptors:(id)a0;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (void)removeSectionDescriptors:(id)a0;

@end
