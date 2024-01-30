@class WDDocument, NSMutableArray, WDTableCell;

@interface WDText : NSObject {
    NSMutableArray *mBlocks;
    int mTextType;
}

@property (readonly, weak) WDDocument *document;
@property (readonly, weak) WDTableCell *tableCell;

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)blocks;
- (void)addBlock:(id)a0;
- (id)content;
- (id)paragraphs;
- (id)addParagraph;
- (id)blockAt:(unsigned long long)a0;
- (int)textType;
- (void)removeLastCharacter:(unsigned short)a0;
- (unsigned long long)blockCount;
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
