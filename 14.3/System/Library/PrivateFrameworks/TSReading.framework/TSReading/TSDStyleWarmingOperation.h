@class TSSStyle, TSKAccessController;

@interface TSDStyleWarmingOperation : NSOperation {
    TSSStyle *mStyle;
    int mProperty;
    TSKAccessController *mAccessController;
}

- (void)warm;
- (void)main;
- (id)initWithStyle:(id)a0 property:(int)a1 accessController:(id)a2;

@end
