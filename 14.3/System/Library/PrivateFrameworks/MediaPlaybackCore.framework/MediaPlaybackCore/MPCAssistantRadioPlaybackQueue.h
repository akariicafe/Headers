@class NSString;

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSString *stationStringID;

+ (id)radioQueueWithContextID:(id)a0 stationStringID:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;
- (BOOL)supportedOnCurrentPlatform;
- (id)initWithContextID:(id)a0 stationStringID:(id)a1;

@end
