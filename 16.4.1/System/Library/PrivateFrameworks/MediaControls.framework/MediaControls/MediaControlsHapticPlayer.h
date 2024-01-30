@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

@interface MediaControlsHapticPlayer : NSObject

@property (retain, nonatomic) CHHapticEngine *engine;
@property (retain, nonatomic) id<CHHapticPatternPlayer> expandedButtonChangedPlayer;

- (void)tearDown;
- (void)setupExpandedButtonChanged;
- (void)checkError:(id)a0;
- (void)dealloc;
- (void)prepare;
- (void).cxx_destruct;
- (void)expandedButtonChanged;

@end
