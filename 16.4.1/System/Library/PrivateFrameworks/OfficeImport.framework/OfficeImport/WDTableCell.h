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
- (unsigned long long)index;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (id)text;
- (id)description;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)initWithRow:(id)a0 at:(unsigned long long)a1;
- (long long)compareIndex:(id)a0;
- (void)setUseTrackedProperties:(BOOL)a0;
- (BOOL)useTrackedProperties;

@end
