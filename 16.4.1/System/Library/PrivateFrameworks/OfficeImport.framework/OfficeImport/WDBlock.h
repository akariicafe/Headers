@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (BOOL)isEmpty;
- (id)document;
- (id)text;
- (id)initWithText:(id)a0;
- (id)init;
- (id)description;
- (void)clearProperties;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (int)textType;

@end
