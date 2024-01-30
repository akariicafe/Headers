@class NSString;

@interface TVRMSNowPlayingInfo : NSObject

@property (nonatomic) unsigned long long itemID;
@property (nonatomic) unsigned long long databaseID;
@property (retain, nonatomic) NSString *trackName;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic) double timestamp;
@property (nonatomic) double timeRemaining;
@property (nonatomic) double totalDuration;
@property (nonatomic) int revisionNumber;
@property (nonatomic) long long mediaKind;
@property (nonatomic) long long playbackState;
@property (nonatomic) long long likedState;
@property (nonatomic) long long scrubbableState;
@property (nonatomic) BOOL canSkipNext;
@property (nonatomic) BOOL canSkipPrevious;
@property (nonatomic) BOOL canWishlist;
@property (nonatomic) BOOL hasChapterData;
@property (nonatomic, getter=isLikeable) BOOL likeable;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) NSString *artworkIdentifier;

- (id)protobuf;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProtobuf:(id)a0;

@end
