@class NSString, SHSyncedLyrics, NSDate;

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long matchScore;
@property (readonly, nonatomic) float speedSkew;
@property (readonly, nonatomic) SHSyncedLyrics *syncedLyrics;
@property (readonly, nonatomic) NSDate *audioStartDate;
@property (readonly, copy, nonatomic) NSString *syncedLyricsSnippet;
@property (readonly, nonatomic) float frequencySkew;
@property (readonly, nonatomic) double matchOffset;
@property (readonly, nonatomic) double predictedCurrentMatchOffset;

- (long long)compare:(id)a0;
- (id)initWithProperties:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)offset;
- (id)initWithMatchedMediaItemDictionary:(id)a0 syncedLyrics:(id)a1;
- (id)initWithMatchedMediaItemDictionary:(id)a0;

@end
