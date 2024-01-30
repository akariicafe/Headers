@class AXUIClient, NSString, NSArray, AXOrator, UIImpactFeedbackGenerator, NSMutableArray, AXElement;

@interface AXSpeakFingerManager : NSObject <AXOratorDelegate, AXUIClientDelegate, AXUIService> {
    AXUIClient *_voiceOverDisplayManagerClient;
}

@property (retain, nonatomic) NSMutableArray *stateUpdateBlocks;
@property (retain, nonatomic) AXElement *currentSpeakFingerElement;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchPoint;
@property (retain, nonatomic) AXOrator *orator;
@property (nonatomic) BOOL unitTestSpeaking;
@property (nonatomic) BOOL inUnitTestMode;
@property (retain, nonatomic) UIImpactFeedbackGenerator *hapticGenerator;
@property (retain, nonatomic) NSString *springBoardActionHandlerId;
@property (nonatomic) unsigned long long speakFingerState;
@property (retain, nonatomic) NSArray *elementsForUnitTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)desiredWindowLevelForContentViewController:(id)a0 userInteractionEnabled:(BOOL)a1;
- (void)dealloc;
- (id)processMessage:(id)a0 withIdentifier:(unsigned long long)a1 fromClientWithIdentifier:(id)a2 error:(id *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)oratorDidFinishSpeaking:(id)a0;
- (void)_removeFocusRingForElement:(id)a0;
- (void)_speakFingerStateChanged;
- (void)_updateFocusRingForWebElement:(id)a0 remove:(BOOL)a1;
- (void)fingerWasLiftedInSpeakUnderFingerMode;
- (void)registerBlockForStateChange:(id /* block */)a0;
- (void)setCursorFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPath:(struct CGPath { } *)a1 withContextId:(unsigned int)a2 element:(id)a3 forceRefresh:(BOOL)a4 animated:(BOOL)a5;
- (void)speakElementAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)speakUnderFingerModeFinishedTalking;
- (void)speakUnderFingerModeStarted;
- (void)userManuallyExitedSpeakUnderFingerMode;

@end
