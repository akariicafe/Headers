@class WDTableCellProperties, NSString, WDText, WDTableRow;

@interface WDTableCell : NSObject {
    unsigned long long mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    BOOL mUseTrackedProperties;
}

@property (readonly, weak) WDTableRow *row;

- (id)properties;
- (void).cxx_destruct;
- (unsigned long long)index;
- (id)text;
- (void)clearProperties;
- (id)description;
- (void)setIdentifier:(id)a0;
- (id)identifier;
- (BOOL)useTrackedProperties;
- (void)setUseTrackedProperties:(BOOL)a0;
- (id)initWithRow:(id)a0 at:(unsigned long long)a1;
- (long long)compareIndex:(id)a0;

@end
