@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer {
    unsigned long long _editingLabelIndex;
}

- (void)drawIntoLayer:(int)a0 inContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;
- (id)transparencyLayers;
- (id)labelStringForAxis:(id)a0 index:(unsigned long long)a1;
- (id)valueAxisLayoutItem;
- (id)labelsLayoutItem;

@end
