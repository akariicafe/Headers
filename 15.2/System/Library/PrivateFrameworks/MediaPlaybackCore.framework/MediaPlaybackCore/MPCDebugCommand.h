@class NSArray, NSDictionary;

@interface MPCDebugCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *supportedSubsystems;
@property (copy, nonatomic) NSDictionary *subsystemRevisions;

- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;

@end
