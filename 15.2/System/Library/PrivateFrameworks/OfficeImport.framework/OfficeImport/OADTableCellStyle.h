@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultStyle;
+ (id)defaultFill;

- (id)fill;
- (id)shallowCopy;
- (id)borderStyle;
- (id)description;
- (void).cxx_destruct;
- (void)setBorderStyle:(id)a0;
- (void)setFill:(id)a0;
- (void)applyOverridesFrom:(id)a0;

@end
