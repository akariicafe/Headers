@class PSTableCell;

@interface CSLPRFAppTableCellHelper : NSObject {
    BOOL _requestInProgress;
    PSTableCell *_tableCell;
}

- (id)blankIcon;
- (id)initWithTableCell:(id)a0;
- (void).cxx_destruct;
- (id)getLazyIcon;

@end
