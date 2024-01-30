@class NSSet, NSMutableSet, RPMediaControlSession;

@interface TVRCRapportMediaEventsManager : NSObject

@property (retain, nonatomic) NSSet *volumeCommands;
@property (retain, nonatomic) NSMutableSet *mediaCommands;
@property (retain, nonatomic) RPMediaControlSession *mediaSession;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (nonatomic) int currentSetting;
@property (readonly) NSSet *supportedMediaCommands;
@property (readonly) BOOL volumeSupported;

- (void)invalidate;
- (void).cxx_destruct;
- (void)sendMediaEvent:(id)a0;
- (int)_captionSettingForButtonEvent:(id)a0;
- (int)_commandForMediaButtonEvent:(id)a0;
- (void)_refreshCaptionState;
- (void)_setupMediaCommands:(unsigned long long)a0;
- (id)initWithCompanionLinkClient:(id)a0 eventHandler:(id /* block */)a1;
- (id)supportedCaptionEvents;

@end
