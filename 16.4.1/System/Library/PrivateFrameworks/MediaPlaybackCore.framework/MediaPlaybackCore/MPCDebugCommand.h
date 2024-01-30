@class NSArray, NSDictionary;

@interface MPCDebugCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *supportedSubsystems;
@property (copy, nonatomic) NSDictionary *subsystemRevisions;

- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (void).cxx_destruct;

@end
