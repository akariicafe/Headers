@class HDTinkerProfile, HKSecondaryPairedDeviceConfiguration, NSString, HKDaemonTransaction;

@interface HDSecondaryDevicePairingRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) HKDaemonTransaction *transaction;
@property (readonly, nonatomic) HKSecondaryPairedDeviceConfiguration *configuration;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long stage;
@property (retain, nonatomic) HDTinkerProfile *profile;
@property (copy, nonatomic) NSString *guardianAccountIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (void)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)codablePairingRequest;

@end
