@class NSString, SHSyncedLyrics;

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long matchScore;
@property (readonly, nonatomic) SHSyncedLyrics *syncedLyrics;
@property (readonly, nonatomic) float timeSkew;
@property (readonly, nonatomic) float frequencySkew;
@property (readonly, nonatomic) double offset;
@property (readonly, copy, nonatomic) NSString *syncedLyricsSnippet;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMatchedMediaItemDictionary:(id)a0;
- (id)initWithMatchedMediaItemDictionary:(id)a0 syncedLyrics:(id)a1;
- (id)updateSyncedLyricsInMediaItemDictionary:(id)a0 syncedLyrics:(id)a1;

@end
