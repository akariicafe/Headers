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

- (BOOL)merge:(int)a0;
- (int)rowSpan;
- (id)textBody;
- (int)topRow;
- (id)description;
- (void)setTextBody:(id)a0;
- (id)properties;
- (void).cxx_destruct;
- (id)init;
- (void)setProperties:(id)a0;
- (void)setTopRow:(int)a0;
- (void)setRowSpan:(int)a0;
- (void)setGridSpan:(int)a0;
- (void)setHorzMerge:(BOOL)a0;
- (void)setVertMerge:(BOOL)a0;
- (BOOL)horzMerge;
- (int)gridSpan;
- (BOOL)vertMerge;
- (int)spanAlongDir:(int)a0;
- (int)leftColumn;
- (void)setLeftColumn:(int)a0;

@end
