@class NSString;

@interface WFAlwaysOnDisplaySettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reversalArbiter;
+ (id)alwaysOnPublisher;
+ (BOOL)canRunIntent;
+ (void)createClientWithCompletionHandler:(id /* block */)a0;
+ (id)filteredPublisherForAlwaysOnPublisher:(id)a0;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)a0;
+ (void)getReversalStateWithBookmark:(id)a0 completionHandler:(id /* block */)a1;
+ (id)reverseAlwaysOnPublisher;

- (BOOL)alwaysOnDisplayState;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
