@class NSArray, MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement

@property (weak, nonatomic) MSVLyricsLine *parentLine;
@property (retain, nonatomic) MSVLyricsWord *nextWord;
@property (weak, nonatomic) MSVLyricsWord *parentWord;
@property (retain, nonatomic) NSArray *subwords;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property (nonatomic) long long wordIndex;

- (id)agent;
- (id)init;
- (void).cxx_destruct;

@end
