@class BPSPublisher;

@interface WFSettingsClientBiomeReversalArbiter : NSObject

@property (readonly, nonatomic) BPSPublisher *publisher;
@property (readonly, nonatomic) BPSPublisher *reversePublisher;

+ (id)reversePublisherOptions;

- (void).cxx_destruct;
- (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)a0;
- (void)getReversalStateWithBookmark:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBiomeStream:(id)a0;
- (id)initWithPublisher:(id)a0 reversePublisher:(id)a1;
- (BOOL)lastEventEquals:(id)a0;

@end
