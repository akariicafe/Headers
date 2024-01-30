@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject {
    _HKAuthorizationRecord *_internalAuthorizationRecord;
}

@property long long status;

- (BOOL)requestedSharing;
- (BOOL)requestedReading;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInternalAuthorizationRecord:(id)a0;

@end
