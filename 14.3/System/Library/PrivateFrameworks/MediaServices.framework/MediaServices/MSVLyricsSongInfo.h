@class NSArray, NSString, NSDictionary;

@interface MSVLyricsSongInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) double songDuration;
@property (retain, nonatomic) NSArray *songwriters;
@property (copy, nonatomic) NSString *lyricGenId;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *lyricsSections;
@property (retain, nonatomic) NSArray *lyricsLines;
@property (retain, nonatomic) NSDictionary *translationsMap;
@property (readonly, nonatomic) NSArray *availableTranslations;

+ (id)_elementsInArray:(id)a0 atTimeOffset:(double)a1 errorMargin:(double)a2;
+ (id)_descriptionForLyricsInfoType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)setLyricsLinesSortedByStartTime:(id)a0;
- (id)_sortLyricsLinesByStartTime:(id)a0;
- (id)lyricsLinesAtTimeOffset:(double)a0 errorMargin:(double)a1;
- (id)lyricsWordsAtTimeOffset:(double)a0 errorMargin:(double)a1;
- (id)lyricsLineStartingBeforeTimeOffset:(double)a0;
- (id)translatedTextForLyricsLine:(id)a0 language:(id)a1;

@end
