@class NSSet, NSMutableSet, RPMediaControlSession;

@interface _TVRCRapportMediaEventsManager : NSObject

@property (retain, nonatomic) NSSet *volumeCommands;
@property (retain, nonatomic) NSMutableSet *mediaCommands;
@property (retain, nonatomic) RPMediaControlSession *mediaSession;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (nonatomic) int currentSetting;
@property (readonly) NSSet *supportedMediaCommands;

- (void).cxx_destruct;
- (void)dealloc;
- (int)_commandForMediaButtonEvent:(id)a0;
- (void)sendMediaEvent:(id)a0;
- (id)initWithCompanionLinkClient:(id)a0 eventHandler:(id /* block */)a1;
- (void)_setupMediaCommands:(unsigned long long)a0;
- (void)_refreshCaptionState;
- (id)supportedCaptionEvents;
- (int)_captionSettingForButtonEvent:(id)a0;

@end
