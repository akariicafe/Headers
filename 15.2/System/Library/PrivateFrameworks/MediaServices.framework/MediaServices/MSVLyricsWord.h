@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement

@property (retain, nonatomic) MSVLyricsLine *parentLine;
@property (retain, nonatomic) MSVLyricsWord *nextWord;

- (void).cxx_destruct;
- (id)init;

@end
