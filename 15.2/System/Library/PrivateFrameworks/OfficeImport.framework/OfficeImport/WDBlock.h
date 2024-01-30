@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (id)initWithText:(id)a0;
- (void)clearProperties;
- (id)description;
- (BOOL)isEmpty;
- (id)init;
- (id)text;
- (id)document;
- (int)textType;
- (int)blockType;
- (id)runIterator;
- (id)newRunIterator;

@end
