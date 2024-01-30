@class NSString, NSError;

@interface PodcastsFoundation.FeedUpdaterObjcError : NSObject

@property (class, nonatomic, readonly) NSString *domainName;
@property (class, nonatomic, readonly) NSError *feedURLIsEmpty;
@property (class, nonatomic, readonly) NSError *localShowMissing;
@property (class, nonatomic, readonly) NSError *preProcessHookDeniedUpdate;
@property (class, nonatomic, readonly) NSError *internetNotReachable;
@property (class, nonatomic, readonly) NSError *feedUpdatesDisabled;
@property (class, nonatomic, readonly) NSError *notYetUpdatable;
@property (class, nonatomic, readonly) NSError *nonSubscribableShow;

- (id)init;

@end
