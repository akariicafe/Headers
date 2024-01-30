@class CSLPRFAppTableCellHelper;

@interface CSLPRFAppCell : PSTableCell {
    CSLPRFAppTableCellHelper *_cellHelper;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)blankIcon;
- (id)getLazyIcon;
- (void).cxx_destruct;

@end
