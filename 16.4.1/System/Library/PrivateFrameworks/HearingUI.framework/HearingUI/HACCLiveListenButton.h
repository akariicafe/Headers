@class HACCLiveListenLevelGroup;

@interface HACCLiveListenButton : HUICCToggleButton

@property (retain, nonatomic) HACCLiveListenLevelGroup *levelGroup;
@property (nonatomic) BOOL isListening;

- (BOOL)enabled;
- (id)accessoryView;
- (id)init;
- (void).cxx_destruct;
- (void)updateValue;
- (id)contentValue;
- (void)liveListenAudioLevelDidChange:(double)a0;

@end
