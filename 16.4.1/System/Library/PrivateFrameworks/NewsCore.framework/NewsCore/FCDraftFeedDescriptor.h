@class NSString;
@protocol FCChannelProviding;

@interface FCDraftFeedDescriptor : FCFeedDescriptor

@property (readonly, nonatomic) id<FCChannelProviding> channel;
@property (readonly, nonatomic) NSString *articleListID;
@property (readonly, nonatomic) NSString *issueListID;

- (long long)feedType;
- (void).cxx_destruct;
- (id)name;
- (id)backingChannel;
- (id)backingTag;
- (id)initWithChannel:(id)a0 articleListID:(id)a1 issueListID:(id)a2;

@end
