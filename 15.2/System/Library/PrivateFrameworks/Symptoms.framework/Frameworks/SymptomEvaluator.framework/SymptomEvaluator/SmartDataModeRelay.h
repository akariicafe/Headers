@class CellularStateRelay, SystemSettingsRelay;

@interface SmartDataModeRelay : NSObject {
    CellularStateRelay *_cellStateRelay;
    SystemSettingsRelay *_systemSettingsRelay;
}

@property (nonatomic) unsigned char cellDataStatus;

+ (id)sharedInstance;
+ (id)cellDataStatusToString:(unsigned char)a0;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_updateCellDataStatus;

@end
