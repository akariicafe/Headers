@class HACCLiveListenLevelGroup;

@interface HACCLiveListenButton : HUICCToggleButton

@property (retain, nonatomic) HACCLiveListenLevelGroup *levelGroup;
@property (nonatomic) BOOL isListening;

- (BOOL)enabled;
- (id)accessoryView;
- (void).cxx_destruct;
- (id)init;
- (void)updateValue;
- (id)contentValue;
- (void)liveListenAudioLevelDidChange:(double)a0;

@end
