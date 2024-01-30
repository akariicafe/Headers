@class WDDocument, NSMutableArray, WDTableCell;

@interface WDText : NSObject {
    NSMutableArray *mBlocks;
    int mTextType;
}

@property (readonly, weak) WDDocument *document;
@property (readonly, weak) WDTableCell *tableCell;

- (id)paragraphs;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)blocks;
- (id)description;
- (id)content;
- (void)addBlock:(id)a0;
- (unsigned long long)blockCount;
- (id)blockAt:(unsigned long long)a0;
- (id)addParagraph;
- (int)textType;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)removeLastBlock;
- (int)tableNestingLevel;
- (id)initWithDocument:(id)a0 textType:(int)a1 tableCell:(id)a2;
- (id)initWithDocument:(id)a0 textType:(int)a1;
- (id)blockIterator;
- (id)newBlockIterator;
- (id)runIterator;
- (id)newRunIterator;
- (unsigned long long)indexOfBlock:(id)a0;
- (id)addParagraphAtIndex:(int)a0;
- (id)firstParagraph;
- (id)addTableAtIndex:(int)a0;
- (id)lastBlock;
- (id)addTable;

@end
