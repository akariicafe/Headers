@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (id)cellStyle;
- (id)textStyle;
- (void)setTextStyle:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setCellStyle:(id)a0;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end
