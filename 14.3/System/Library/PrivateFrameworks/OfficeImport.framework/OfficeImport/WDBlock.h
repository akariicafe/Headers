@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (BOOL)isEmpty;
- (id)init;
- (id)text;
- (id)document;
- (void)clearProperties;
- (id)description;
- (id)initWithText:(id)a0;
- (int)blockType;
- (int)textType;
- (id)runIterator;
- (id)newRunIterator;

@end
