@class NSString;

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSString *stationStringID;

+ (id)radioQueueWithContextID:(id)a0 stationStringID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)getPlaybackQueueWithDestination:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextID:(id)a0 stationStringID:(id)a1;

@end
