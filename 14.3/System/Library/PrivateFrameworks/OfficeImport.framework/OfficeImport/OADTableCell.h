@class OADTableCellProperties, OADTextBody;

@interface OADTableCell : NSObject {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (int)topRow;
- (BOOL)merge:(int)a0;
- (void)setProperties:(id)a0;
- (id)init;
- (id)properties;
- (void).cxx_destruct;
- (int)rowSpan;
- (id)textBody;
- (void)setRowSpan:(int)a0;
- (void)setTopRow:(int)a0;
- (id)description;
- (void)setTextBody:(id)a0;
- (BOOL)horzMerge;
- (BOOL)vertMerge;
- (int)gridSpan;
- (void)setGridSpan:(int)a0;
- (void)setHorzMerge:(BOOL)a0;
- (void)setVertMerge:(BOOL)a0;
- (int)spanAlongDir:(int)a0;
- (int)leftColumn;
- (void)setLeftColumn:(int)a0;

@end
