@class NSString;

@interface CRKRestrictions : NSObject

@property (class, readonly, copy, nonatomic) NSString *didChangeNotification;
@property (class, readonly, copy, nonatomic) NSString *classroomAirPlayAllowed;
@property (class, readonly, copy, nonatomic) NSString *classroomAutomaticallyJoinClassesForced;
@property (class, readonly, copy, nonatomic) NSString *classroomDeviceSettingsModificationAllowed;
@property (class, readonly, copy, nonatomic) NSString *classroomLockDeviceAllowed;
@property (class, readonly, copy, nonatomic) NSString *classroomOpenAppAllowed;
@property (class, readonly, copy, nonatomic) NSString *classroomOpenDeepLinkAllowed;
@property (class, readonly, copy, nonatomic) NSString *classroomOpenURLAllowed;
@property (class, readonly, copy, nonatomic) NSString *classroomRequestPermissionToLeaveClassesForced;
@property (class, readonly, copy, nonatomic) NSString *classroomRoles;
@property (class, readonly, copy, nonatomic) NSString *classroomScreenObservationAllowed;
@property (class, readonly, copy, nonatomic) NSString *classroomUnpromptedAppAndDeviceLockForced;
@property (class, readonly, copy, nonatomic) NSString *classroomUnpromptedScreenObservationForced;
@property (class, readonly, copy, nonatomic) NSString *remoteScreenObservationAllowed;
@property (class, readonly, copy, nonatomic) NSString *screenShotAllowed;
@property (class, readonly, copy, nonatomic) NSString *unpromptedRemoteScreenObservationForced;

@end
