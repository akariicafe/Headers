@class NSString, BLSHBacklightEnvironmentPresentation;

@interface BLSHBacklightMutableTargetState : NSObject <BLSHBacklightTransitionStateMachineState>

@property long long displayMode;
@property (retain) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithState:(id)a0;
- (void)setToState:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void).cxx_destruct;

@end
