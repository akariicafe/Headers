@class WDTableCellProperties, NSString, WDText, WDTableRow;

@interface WDTableCell : NSObject {
    unsigned long long mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    BOOL mUseTrackedProperties;
}

@property (readonly, weak) WDTableRow *row;

- (unsigned long long)index;
- (id)identifier;
- (void)clearProperties;
- (id)description;
- (id)properties;
- (void).cxx_destruct;
- (id)text;
- (void)setIdentifier:(id)a0;
- (BOOL)useTrackedProperties;
- (void)setUseTrackedProperties:(BOOL)a0;
- (id)initWithRow:(id)a0 at:(unsigned long long)a1;
- (long long)compareIndex:(id)a0;

@end
