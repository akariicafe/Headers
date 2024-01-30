@interface PodcastsFoundation.FeedURLComposer : NSObject

@property (class, nonatomic, readonly) long long errorURLDoesNotExist;
@property (class, nonatomic, readonly) long long errorURLInvalid;
@property (class, nonatomic, readonly) long long errorCannotGenerateInternalURL;

- (id)init;
- (id)feedURLForOptionalURL:(id)a0 adamID:(long long)a1 error:(id *)a2;

@end
