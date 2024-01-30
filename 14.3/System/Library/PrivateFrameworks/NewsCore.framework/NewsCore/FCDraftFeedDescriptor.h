@class NSString;
@protocol FCChannelProviding;

@interface FCDraftFeedDescriptor : FCFeedDescriptor

@property (readonly, nonatomic) id<FCChannelProviding> channel;
@property (readonly, nonatomic) NSString *articleListID;
@property (readonly, nonatomic) NSString *issueListID;

- (long long)feedType;
- (void).cxx_destruct;
- (id)allEmitterClasses;
- (id)name;
- (id)initWithChannel:(id)a0 articleListID:(id)a1 issueListID:(id)a2;
- (id)feedGroupEmittersWithConfiguration:(id)a0 forYouConfig:(id)a1;
- (id)backingTag;
- (id)backingChannel;

@end
