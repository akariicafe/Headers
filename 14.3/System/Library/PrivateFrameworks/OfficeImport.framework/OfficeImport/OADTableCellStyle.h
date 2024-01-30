@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultStyle;
+ (id)defaultFill;

- (id)fill;
- (void).cxx_destruct;
- (id)description;
- (id)borderStyle;
- (void)setBorderStyle:(id)a0;
- (id)shallowCopy;
- (void)setFill:(id)a0;
- (void)applyOverridesFrom:(id)a0;

@end
