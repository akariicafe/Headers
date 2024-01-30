@interface AXPIFingerEventSender : NSObject

@property (nonatomic) BOOL shouldAddRealEventFlag;
@property (nonatomic) unsigned long long senderID;

- (void)performCancel;
- (id)_assignFingerIdentifiersToTouches:(id)a0;
- (void)performDownWithTouchesByFingerIdentifier:(id)a0;
- (void)_sendHandEvent:(unsigned int)a0 touchesByFingerIdentifier:(id)a1;
- (void)performMoveWithTouchesByFingerIdentifier:(id)a0;
- (void)performUpWithTouchesByFingerIdentifier:(id)a0;
- (void)performDownWithTouches:(id)a0;
- (void)performMoveWithTouches:(id)a0;
- (void)performUpWithTouches:(id)a0;

@end
