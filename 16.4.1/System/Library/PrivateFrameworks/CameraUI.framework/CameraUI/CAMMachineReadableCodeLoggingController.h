@interface CAMMachineReadableCodeLoggingController : NSObject

@property (nonatomic, setter=_setSeenMachineReadableObjectOfAcceptableSize:) BOOL _seenMachineReadableObjectOfAcceptableSize;
@property (nonatomic, setter=_setSeenMachineReadableObjectOfUnacceptableSize:) BOOL _seenMachineReadableObjectOfUnacceptableSize;
@property (nonatomic, setter=_setSeenMachineReadableObjectInNonActiveState:) BOOL _seenMachineReadableObjectInNonActiveState;

- (void)logMachineReadableCodeResult:(id)a0 isOfSignificantSize:(BOOL)a1;
- (void)logMachineReadableCodeResultDuringInactiveAppState;
- (id)init;
- (void)resetLoggingState;

@end
