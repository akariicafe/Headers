@class PSTableCell;

@interface CSLPRFAppTableCellHelper : NSObject {
    BOOL _requestInProgress;
    PSTableCell *_tableCell;
}

- (id)blankIcon;
- (id)getLazyIcon;
- (void).cxx_destruct;
- (id)initWithTableCell:(id)a0;

@end
