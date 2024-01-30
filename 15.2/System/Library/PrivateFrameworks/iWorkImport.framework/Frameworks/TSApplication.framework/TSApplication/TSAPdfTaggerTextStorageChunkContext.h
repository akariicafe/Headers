@class TSWPRep;

@interface TSAPdfTaggerTextStorageChunkContext : TSAPdfTaggerTextColumnOwnerContext

@property (readonly, nonatomic) TSWPRep *textStorageChunk;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 textStorageChunk:(id)a1 limitSelection:(id)a2;

@end
