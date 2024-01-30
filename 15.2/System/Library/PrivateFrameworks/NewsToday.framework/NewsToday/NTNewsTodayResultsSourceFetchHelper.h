@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject

@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors;
@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSectionQueueDescriptors:(id)a0;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (void)removeSectionDescriptors:(id)a0;

@end
