@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject

@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors;
@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;

- (void)removeSectionDescriptors:(id)a0;
- (id)initWithSectionQueueDescriptors:(id)a0;
- (id)init;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (void).cxx_destruct;

@end
