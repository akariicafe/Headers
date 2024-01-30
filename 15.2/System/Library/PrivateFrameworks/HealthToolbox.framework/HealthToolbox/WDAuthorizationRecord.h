@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject {
    _HKAuthorizationRecord *_internalAuthorizationRecord;
}

@property long long status;

- (BOOL)requestedReading;
- (void).cxx_destruct;
- (id)init;
- (BOOL)requestedSharing;
- (id)initWithInternalAuthorizationRecord:(id)a0;

@end
