@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement

@property (retain, nonatomic) MSVLyricsLine *parentLine;
@property (retain, nonatomic) MSVLyricsWord *nextWord;

- (id)init;
- (void).cxx_destruct;

@end
