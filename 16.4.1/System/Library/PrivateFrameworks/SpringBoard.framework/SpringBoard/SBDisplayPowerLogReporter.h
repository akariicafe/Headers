@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBDisplayPowerLogReporter : NSObject {
    NSMutableDictionary *_displayNameToPowerLogEntry;
    id<BSInvalidatable> _stateCaptureAssertion;
    NSObject<OS_dispatch_queue> *_powerLogSendQueue;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)reportPowerLogEntry:(id)a0;

@end
