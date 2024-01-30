@class NSString, NSDictionary;
@protocol SCROBrailleDisplayCommandDispatcherDelegate;

@interface SCROBrailleDisplayCommandDispatcher : NSObject <SCROBrailleDisplayCommandDispatcherProtocol> {
    NSDictionary *_commandDictionary;
}

@property (weak, nonatomic) id<SCROBrailleDisplayCommandDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)_handlePanLeftEvent:(id)a0;
- (void)_handlePanRightEvent:(id)a0;
- (void)_handleMoveLeftEvent:(id)a0;
- (void)_handleMoveRightEvent:(id)a0;
- (void)_handleRouterEvent:(id)a0;
- (void)_handleDeleteEvent:(id)a0;
- (void)_handleEscapeEvent:(id)a0;
- (void)_handleReturnEvent:(id)a0;
- (void)_handleTranslateEvent:(id)a0;
- (void)_handleToggleContractedBrailleEvent:(id)a0;
- (void)_handleToggleEightDotBrailleEvent:(id)a0;
- (void)_handleUnsupportedEvent:(id)a0;
- (BOOL)handleBrailleKeyEvent:(id)a0;
- (void)_handleForwardDeleteEvent:(id)a0;

@end
