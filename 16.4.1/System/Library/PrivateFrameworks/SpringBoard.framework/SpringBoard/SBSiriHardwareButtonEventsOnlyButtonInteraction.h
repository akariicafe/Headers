@class SBSiriHardwareButtonInteraction, NSString;

@interface SBSiriHardwareButtonEventsOnlyButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>

@property (nonatomic) long long siriButtonIdentifier;
@property (weak, nonatomic) SBSiriHardwareButtonInteraction *parentSiriInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hardwareButtonInteractionForHomeButtonForwardingToInteraction:(id)a0;

- (BOOL)consumeSinglePressUp;
- (void).cxx_destruct;

@end
