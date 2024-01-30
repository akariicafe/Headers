@class CSLPRFAppTableCellHelper;

@interface CSLPRFAppSwitchCell : PSSwitchTableCell {
    CSLPRFAppTableCellHelper *_cellHelper;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)blankIcon;
- (void).cxx_destruct;
- (id)getLazyIcon;

@end
