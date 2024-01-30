@class NSString;

@interface BSStateCaptureInvalidator : NSObject <BSInvalidatable> {
    unsigned long long _handle;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;

@end
