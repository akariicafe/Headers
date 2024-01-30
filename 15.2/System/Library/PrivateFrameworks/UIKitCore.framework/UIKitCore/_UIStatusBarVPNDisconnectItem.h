@class NSTimer, _UIStatusBarVPNDisconnectView;

@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarVPNDisconnectView *disconnectView;
@property (retain, nonatomic) NSTimer *slashBeginTimer;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void)_create_disconnectView;
- (void).cxx_destruct;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;

@end
