@class NSString, AVOutputContextDestinationChangeInternal;

@interface AVOutputContextDestinationChange : NSObject {
    AVOutputContextDestinationChangeInternal *_ivars;
}

@property (readonly) long long status;
@property (readonly) NSString *cancellationReason;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_setStatus:(long long)a0 cancellationReason:(id)a1;
- (void)markAsInProgress;
- (void)markAsCancelledWithReason:(id)a0;
- (void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(struct __CFString { } *)a0;
- (void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(struct __CFString { } *)a0;
- (void)markAsFinished;
- (void)markAsFailed;

@end
