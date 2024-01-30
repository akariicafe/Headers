@class WDTableProperties;

@interface WMTableStyle : WMStyle {
    WDTableProperties *mWdTableProperties;
}

- (void).cxx_destruct;
- (id)initWithWDTableProperties:(id)a0;
- (void)addTableProperties:(id)a0;

@end
