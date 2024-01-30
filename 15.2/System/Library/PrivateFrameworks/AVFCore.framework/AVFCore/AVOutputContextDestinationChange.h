@class NSString, AVOutputContextDestinationChangeInternal;

@interface AVOutputContextDestinationChange : NSObject {
    AVOutputContextDestinationChangeInternal *_ivars;
}

@property (readonly) long long status;
@property (readonly) NSString *cancellationReason;

- (void)markAsFinished;
- (void)markAsFailed;
- (void)_setStatus:(long long)a0 cancellationReason:(id)a1;
- (void)markAsInProgress;
- (void)markAsCancelledWithReason:(id)a0;
- (void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(struct __CFString { } *)a0;
- (void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(struct __CFString { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
