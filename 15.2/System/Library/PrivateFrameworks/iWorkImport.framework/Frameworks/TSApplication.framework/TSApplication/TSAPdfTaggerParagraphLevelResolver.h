@class TSAPdfTagger;

@interface TSAPdfTaggerParagraphLevelResolver : NSObject

@property (readonly, weak, nonatomic) TSAPdfTagger *tagger;

- (int)tagType;
- (void).cxx_destruct;
- (id)initWithTagger:(id)a0;
- (int)levelOfCurrentParagraph:(id *)a0;
- (BOOL)paragraphInfo:(id)a0 matchesParagraphInfo:(id)a1 level:(int)a2;

@end
