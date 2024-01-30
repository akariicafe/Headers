@class NSObject;
@protocol CRKClassroomLockScreenMonitoring;

@interface CRKPlatformClassroomLockScreenMonitor : NSObject

@property (class, readonly, nonatomic) NSObject<CRKClassroomLockScreenMonitoring> *sharedMonitor;

@end
