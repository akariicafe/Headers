@class NSArray;

@interface MPChangeQueueEndActionCommand : MPRemoteCommand

@property (nonatomic) long long currentQueueEndAction;
@property (copy, nonatomic) NSArray *supportedQueueEndActions;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;

@end
