@class NSDictionary;

@interface NWUsageTargetSelector : NSObject {
    BOOL _hasExplicitTCP;
    BOOL _explicitTCPValue;
    BOOL _hasExplicitUDP;
    BOOL _explicitUDPValue;
    BOOL _hasExplicitChannels;
    BOOL _explicitChannelsValue;
    BOOL _hasExplicitSockets;
    BOOL _explicitSocketsValue;
    BOOL _hasExplicitQUIC;
    BOOL _explicitQUICValue;
}

@property (retain) NSDictionary *suppliedParams;
@property unsigned long long filter;
@property unsigned long long events;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSelection:(id)a0;
- (id)initWithMultipleSelections:(id)a0;
- (BOOL)applySelection:(id)a0;
- (BOOL)shouldAddProvider:(int)a0;

@end
