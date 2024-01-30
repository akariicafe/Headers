@class EDStyle, EDWorkbook;

@interface EMCellNumberMapper : CMMapper {
    double edValue;
    EDStyle *edStyle;
    EDWorkbook *workbook;
}

@property double columnWidth;

- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithDoubleValue:(double)a0 style:(id)a1 columnWidth:(double)a2 workbook:(id)a3 parent:(id)a4;
- (id)formatValueAsNumber;
- (id)insertRedSpanIfNegativeAt:(id)a0;

@end
