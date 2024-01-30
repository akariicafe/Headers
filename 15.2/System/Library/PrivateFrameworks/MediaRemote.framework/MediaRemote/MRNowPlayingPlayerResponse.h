@class NSArray, MRPlayerPath, MRPlaybackQueue, MRClient, NSDate;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying>

@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) MRClient *clientProperties;
@property (copy, nonatomic) NSDate *deviceLastPlayingDate;
@property (copy, nonatomic) NSDate *playerLastPlayingDate;
@property (readonly, copy, nonatomic) NSArray *proxiableSupportedCommands;
@property (readonly, nonatomic) BOOL deviceHasPlayedRecently;
@property (readonly, nonatomic) BOOL playerHasPlayedRecently;
@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) BOOL hasPlayedRecently;

- (id)description;
- (void).cxx_destruct;
- (id)debugDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)dictionaryRepresentation;

@end
