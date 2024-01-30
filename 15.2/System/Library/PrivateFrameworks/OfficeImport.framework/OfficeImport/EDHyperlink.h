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

- (id)reference;
- (id)toolTip;
- (void)setPath:(id)a0;
- (id)descriptionText;
- (id)description;
- (void)setToolTip:(id)a0;
- (void).cxx_destruct;
- (void)setDescriptionText:(id)a0;
- (void)setReference:(id)a0;
- (int)type;
- (id)path;
- (void)setType:(int)a0;
- (id)dosPath;
- (void)setDosPath:(id)a0;
- (void)setTextMark:(id)a0;
- (id)textMark;

@end
