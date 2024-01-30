@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

@interface MediaControlsHapticPlayer : NSObject

@property (retain, nonatomic) CHHapticEngine *engine;
@property (retain, nonatomic) id<CHHapticPatternPlayer> expandedButtonChangedPlayer;

- (void)tearDown;
- (void)prepare;
- (void).cxx_destruct;
- (void)dealloc;
- (void)expandedButtonChanged;
- (void)checkError:(id)a0;
- (void)setupExpandedButtonChanged;

@end
