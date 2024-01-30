@class EDString, EDReference;

@interface EDHyperlink : NSObject {
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;

- (id)path;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (id)descriptionText;
- (void)setDescriptionText:(id)a0;
- (id)description;
- (int)type;
- (id)toolTip;
- (void)setPath:(id)a0;
- (void)setReference:(id)a0;
- (id)reference;
- (id)dosPath;
- (void)setDosPath:(id)a0;
- (void)setTextMark:(id)a0;
- (void)setToolTip:(id)a0;
- (id)textMark;

@end
