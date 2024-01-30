@class TSWPColumn;

@interface TSAPdfTaggerOneColumnTextOwnerContext : TSAPdfTaggerTextColumnOwnerContext

@property (retain) TSWPColumn *textColumn;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 textColumn:(id)a1 limitSelection:(id)a2;

@end
