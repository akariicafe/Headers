@class CellularStateRelay, SystemSettingsRelay;

@interface SmartDataModeRelay : NSObject {
    CellularStateRelay *_cellStateRelay;
    SystemSettingsRelay *_systemSettingsRelay;
}

@property (nonatomic) unsigned char cellDataStatus;

+ (id)sharedInstance;
+ (id)cellDataStatusToString:(unsigned char)a0;

- (void)_updateCellDataStatus;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
