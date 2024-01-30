@class NSString, NSArray, VKQuad;

@interface VKCMockTextLine : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) VKQuad *quad;
@property (retain, nonatomic) NSArray *words;

- (void).cxx_destruct;
- (id)initWithWordsArray:(id)a0 startingIndex:(unsigned long long)a1;
- (void)loadWordsArrayFromWords:(id)a0 startingIndex:(unsigned long long)a1;

@end
