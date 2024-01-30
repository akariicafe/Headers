@class NSString;

@interface HMDHomeLocalDeviceCapabilitiesDataSource : NSObject <HMDHomeLocalDeviceCapabilitiesDataSource>

@property (readonly) BOOL supportsHomeKitDataStream;
@property (readonly) BOOL isResidentCapable;
@property (readonly) BOOL supportsHomeInvitation;
@property (readonly) BOOL supportsRemoteAccess;
@property (readonly) BOOL supportsAddingAccessory;
@property (readonly) BOOL isCompanionCapable;
@property (readonly) BOOL supportsBulletinBoard;
@property (readonly) BOOL supportsSiriUnsecuringActionsWithWatchAuth;
@property (readonly) BOOL supportsSiriUnsecuringActionsWithNoPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
