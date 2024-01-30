@class NSString, NSNumber, NSDate;

@interface SSMusicResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *lastPlayedDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *song;
@property (retain, nonatomic) NSNumber *songLengthInSeconds;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (id)stringWithArtist:(id)a0 album:(id)a1;
+ (id)musicFootnoteStringWithReleaseDate:(id)a0 songLengthInSeconds:(int)a1 lastPlayedDate:(id)a2;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildInlineCardSection;
- (id)buildCompactCardSection;
- (id)buildResult;
- (id)buildTitle;

@end
