@interface UIPrintRangePickerView : UIPickerView {
    double _shift;
}

- (void)layoutSubviews;
- (double)_wheelShift;
- (BOOL)_forceTextAlignmentCentered;

@end
