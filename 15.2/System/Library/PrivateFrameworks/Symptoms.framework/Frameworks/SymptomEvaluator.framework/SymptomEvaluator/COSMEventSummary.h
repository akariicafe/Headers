@interface COSMEventSummary : NSObject {
    BOOL _arpFailureEvent;
    BOOL _captivityIndeterminateEvent;
    BOOL _dampeningTimerExpiryEvent;
    BOOL _dataStallThresholdEvent;
    BOOL _excessCertificateErrorsEvent;
    BOOL _imminentStallEvent;
    BOOL _mediaPlaybackStallEvent;
    BOOL _nd6FailureEvent;
    BOOL _wifiChangedSSIDEvent;
}

@property (nonatomic) BOOL arpFailureEvent;
@property (nonatomic) BOOL captivityIndeterminateEvent;
@property (nonatomic) BOOL dampeningTimerExpiryEvent;
@property (nonatomic) BOOL dataStallThresholdEvent;
@property (nonatomic) BOOL excessCertificateErrorsEvent;
@property (nonatomic) BOOL imminentStallEvent;
@property (nonatomic) BOOL mediaPlaybackStallEvent;
@property (nonatomic) BOOL nd6FailureEvent;
@property (nonatomic) BOOL wifiChangedSSIDEvent;
@property (readonly, nonatomic) unsigned long long eventsInstanceNumber;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)clear;
- (id)description;
- (void)_bumpInstanceNumber;

@end
