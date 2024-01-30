@class NSArray, NSString, MSVLyricsSection;

@interface MSVLyricsLine : MSVLyricsTextElement

@property (nonatomic, getter=isInstrumentalBreak) BOOL instrumentalBreak;
@property (nonatomic) long long lineIndex;
@property (nonatomic) long long originalLineIndex;
@property (weak, nonatomic) MSVLyricsSection *parentSection;
@property (retain, nonatomic) MSVLyricsLine *nextLine;
@property (retain, nonatomic) NSArray *words;
@property (copy, nonatomic) NSString *translationKey;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsTimeOffset:(double)a0 withErrorMargin:(double)a1;

@end
