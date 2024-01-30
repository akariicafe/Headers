@class FCFeedDescriptor;
@protocol FCChannelProviding;

@interface FCSuperfeedFeedDescriptor : FCFeedDescriptor

@property (readonly, nonatomic) id<FCChannelProviding> channel;
@property (readonly, nonatomic) FCFeedDescriptor *defaultSectionFeed;

- (long long)feedType;
- (id)backingTag;
- (id)backingChannel;
- (long long)feedSortMethod;
- (long long)feedPersonalizationConfigurationSet;
- (void).cxx_destruct;
- (id)initWithDefaultSection:(id)a0;
- (id)name;

@end
