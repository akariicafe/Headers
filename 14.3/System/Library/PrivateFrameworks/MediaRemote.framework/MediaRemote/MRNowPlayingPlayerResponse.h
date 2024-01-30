@class NSArray, MRPlayerPath, MRPlaybackQueue, NSDate;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying>

@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (copy, nonatomic) NSDate *lastPlayingDate;
@property (nonatomic) unsigned int playbackState;
@property (readonly, nonatomic) BOOL hasPlayedRecently;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
