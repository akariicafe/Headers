@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (void).cxx_destruct;
- (id)cellStyle;
- (void)setCellStyle:(id)a0;
- (id)description;
- (id)textStyle;
- (void)setTextStyle:(id)a0;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end
