@class HDTinkerProfile, HKSecondaryPairedDeviceConfiguration, NSString, HKDaemonTransaction;

@interface HDSecondaryDevicePairingRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _startTime;
    HKDaemonTransaction *_transaction;
    HKSecondaryPairedDeviceConfiguration *_configuration;
    id /* block */ _completion;
    long long _stage;
    HDTinkerProfile *_profile;
    NSString *_guardianAccountIdentifier;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
