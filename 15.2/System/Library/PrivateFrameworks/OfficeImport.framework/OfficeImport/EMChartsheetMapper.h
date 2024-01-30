@class EDChartSheet;

@interface EMChartsheetMapper : EMSheetMapper {
    EDChartSheet *mChartSheet;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBox;
}

- (int)width;
- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithChartSheet:(id)a0 parent:(id)a1;
- (int)preprocessWidthWithState:(id)a0;
- (int)preprocessHeightWithState:(id)a0;

@end
