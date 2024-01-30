@class NSDictionary, NSString, NSURL;

@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *resultDictionary;
@property (readonly, copy, nonatomic) NSString *fuzzyRepresentation;
@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *artist;
@property (readonly, copy, nonatomic) NSString *appleMusicID;
@property (readonly, copy, nonatomic) NSString *lyricsSnippet;
@property (readonly, copy, nonatomic) NSString *staticLyrics;
@property (readonly, copy, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSURL *webURL;
@property (readonly, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) NSURL *appleMusicURL;
@property (readonly, nonatomic) BOOL explicitContent;

+ (id)mediaItemWithResultDictionary:(id)a0;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResultDictionary:(id)a0;

@end
