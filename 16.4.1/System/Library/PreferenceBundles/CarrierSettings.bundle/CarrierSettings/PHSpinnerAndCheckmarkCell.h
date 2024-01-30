@class UIActivityIndicatorView;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    unsigned char _loading : 1;
    unsigned char _rightAlignSpinner : 1;
    int _row;
}

- (void)setLoading:(BOOL)a0;
- (void)setChecked:(BOOL)a0;
- (void).cxx_destruct;
- (void)setRow:(int)a0;
- (void)_addSpinner;
- (void)_removeSpinner;
- (void)setReallyChecked:(BOOL)a0;

@end
