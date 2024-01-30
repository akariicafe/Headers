@class NSString, GCControllerDirectionPad;

@interface GCDirectionalGamepad : GCMicroGamepad <CoalescableMicroGamepad, DigitizerValueChangedDelegate> {
    unsigned long long _owner;
    long long _deviceType;
}

@property (nonatomic) unsigned long long owner;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)setAllowsRotation:(BOOL)a0;
- (BOOL)allowsRotation;
- (BOOL)reportsAbsoluteDpadValues;
- (void)digitizerTouchEvent:(id)a0 x:(double)a1 y:(double)a2 timestamp:(unsigned long long)a3 forceSkipDpadRotation:(BOOL)a4;
- (void)digitizerTouchUp:(id)a0 timestamp:(unsigned long long)a1 forceSkipDpadRotation:(BOOL)a2;
- (BOOL)ownershipClaimingElementsZero;
- (void)setReportsAbsoluteDpadValues:(BOOL)a0;

@end
