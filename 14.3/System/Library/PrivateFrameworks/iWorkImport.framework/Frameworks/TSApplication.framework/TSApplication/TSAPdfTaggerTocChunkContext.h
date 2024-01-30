@class TSWPTOCRep, NSMutableDictionary;

@interface TSAPdfTaggerTocChunkContext : TSAPdfTaggerContext {
    NSMutableDictionary *_paragraphStyleToLevelMap;
}

@property (readonly, nonatomic) TSWPTOCRep *tocChunkRep;

- (void).cxx_destruct;
- (void)setUp;
- (id)initWithStateOfTagger:(id)a0 tocChunkRep:(id)a1;
- (int)levelForParagraphStyle:(id)a0;

@end
