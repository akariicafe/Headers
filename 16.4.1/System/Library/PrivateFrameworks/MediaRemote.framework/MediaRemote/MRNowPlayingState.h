@class MRPlaybackQueue, NSString, NSArray, MRPlayerPath, NSData, NSDictionary, _MRSetStateMessageProtobuf, MRPlaybackQueueRequest;

@interface MRNowPlayingState : NSObject <NSCopying>

@property (readonly, nonatomic) _MRSetStateMessageProtobuf *protobuf;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (copy, nonatomic) NSString *displayID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) MRPlaybackQueueRequest *request;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) BOOL hasPlaybackStateTimestamp;
@property (nonatomic) double playbackStateTimestamp;
@property (readonly, nonatomic) BOOL containsArtwork;
@property (nonatomic) unsigned long long playbackQueueCapabilities;
@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithoutArtwork;

@end
