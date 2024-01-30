@class NSString, NSDictionary, NSArray, NSDate, NSURL;

@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, copy, nonatomic) NSString *fuzzyRepresentation;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) NSArray *staticLyricLines;
@property (readonly, copy, nonatomic) NSString *lyricsSnippet;
@property (retain, nonatomic) NSDictionary *_rawResponseSongs;
@property (readonly, nonatomic) long long shazamCount;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *shazamID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSArray *genres;
@property (readonly, copy, nonatomic) NSString *appleMusicID;
@property (readonly, nonatomic) NSURL *appleMusicURL;
@property (readonly, nonatomic) NSURL *webURL;
@property (readonly, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) BOOL explicitContent;
@property (readonly, copy, nonatomic) NSString *isrc;
@property (readonly, nonatomic) NSArray *timeRanges;
@property (readonly, nonatomic) NSArray *frequencySkewRanges;

+ (id)serverConnection;
+ (void)fetchMediaItemWithShazamID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)mediaItemWithDictionary:(id)a0;
+ (id)mediaItemWithProperties:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)describesFrequencySkew:(double)a0;
- (BOOL)describesOffset:(double)a0;
- (id)validValueForProperty:(id)a0;

@end
