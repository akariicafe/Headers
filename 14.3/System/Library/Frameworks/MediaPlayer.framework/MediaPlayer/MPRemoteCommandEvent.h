@class NSDictionary, MPRemoteCommand, NSString;

@interface MPRemoteCommandEvent : NSObject {
    NSDictionary *_mediaRemoteOptions;
    NSString *_contextID;
    NSString *_commandID;
}

@property (readonly, nonatomic) MPRemoteCommand *command;
@property (readonly, nonatomic) double timestamp;

+ (id)eventWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

- (id)init;
- (id)mediaRemoteOptions;
- (void).cxx_destruct;
- (id)commandID;
- (id)contextID;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (id)interfaceID;
- (long long)playbackQueueOffset;
- (id)description;
- (id)sourceID;
- (id)contentItemID;

@end
