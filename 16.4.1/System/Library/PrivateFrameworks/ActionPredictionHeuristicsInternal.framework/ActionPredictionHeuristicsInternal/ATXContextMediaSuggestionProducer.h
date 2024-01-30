@class NSString, NSDate;

@interface ATXContextMediaSuggestionProducer : NSObject {
    long long _mediaType;
    long long _mediaSubType;
    NSString *_trackName;
    long long _trackAdamId;
    NSString *_artistName;
    long long _artistAdamId;
    NSString *_albumName;
    long long _albumAdamId;
    NSString *_searchString;
    NSString *_destDisplayName;
    NSDate *_expirationDate;
}

+ (id)new;

- (id)suggestionForArtistWithReason:(unsigned long long)a0 score:(double)a1;
- (id)initWithMediaRemoteContentItem:(id)a0 destDisplayName:(id)a1 expirationDate:(id)a2;
- (id)suggestionForAlbumWithReason:(unsigned long long)a0 score:(double)a1;
- (id)init;
- (id)suggestionForTrackWithReason:(unsigned long long)a0 score:(double)a1;
- (void).cxx_destruct;

@end
