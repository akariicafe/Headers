@class NSArray;
@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchResult : NSObject

@property (retain, nonatomic) id<FCChannelProviding> channel;
@property (retain, nonatomic) NSArray *sectionHeadlinesGroups;

- (id)init;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0 sectionHeadlinesGroups:(id)a1;

@end
