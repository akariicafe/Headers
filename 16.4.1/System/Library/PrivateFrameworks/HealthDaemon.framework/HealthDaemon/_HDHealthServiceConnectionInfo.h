@class NSData, NSUUID, NSObject;
@protocol OS_dispatch_source;

@interface _HDHealthServiceConnectionInfo : NSObject {
    BOOL _pairingAttempted;
    unsigned long long _sessionIdentifier;
    id /* block */ _sessionHandler;
    id /* block */ _dataHandler;
    id /* block */ _characteristicsHandler;
    id /* block */ _mfaSuccessHandler;
    unsigned long long _connectionOptions;
    long long _mfaStatus;
    NSData *_autoPairData;
    NSUUID *_peripheralUUID;
    long long _connectionState;
    long long _pairingState;
    double _timeoutInterval;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

- (void).cxx_destruct;

@end
