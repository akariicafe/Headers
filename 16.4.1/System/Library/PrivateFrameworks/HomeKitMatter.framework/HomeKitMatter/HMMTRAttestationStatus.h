@class HMMTRUIDialogPresenter, HMMTRAccessoryServer, NSString, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMMTRAttestationStatus : NSObject <MTRDeviceAttestationDelegate>

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (retain, nonatomic) HMMTRUIDialogPresenter *uiDialogPresenter;
@property (readonly, copy) NSNumber *failSafeExpiryTimeoutSecs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
