@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (void)setCellStyle:(id)a0;
- (id)cellStyle;
- (void)setTextStyle:(id)a0;
- (id)textStyle;
- (id)shallowCopy;
- (id)description;
- (void).cxx_destruct;
- (void)applyOverridesFrom:(id)a0;

@end
