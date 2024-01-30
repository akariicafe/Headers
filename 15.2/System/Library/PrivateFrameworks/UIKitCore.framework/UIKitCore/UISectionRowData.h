@class UITableViewRowData;

@interface UISectionRowData : NSObject <NSCopying> {
    BOOL _valid;
    BOOL _sectionOffsetValid;
    double _sectionOffset;
    long long _sectionRowOffset;
    unsigned long long _numRows;
    double _sectionHeight;
    double _headerOffset;
    double _footerOffset;
    long long _headerAlignment;
    long long _footerAlignment;
    double _maxHeaderTitleWidth;
    double _maxFooterTitleWidth;
    UITableViewRowData *_rowData;
    double _headerHeight;
    double _footerHeight;
    unsigned long long _arrayLength;
    float *_rowHeights;
    double *_rowOffsets;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
