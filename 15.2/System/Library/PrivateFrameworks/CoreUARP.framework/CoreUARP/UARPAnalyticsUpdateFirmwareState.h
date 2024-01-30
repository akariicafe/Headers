@class NSNumber, UARPAccessoryID, UARPUpdateFirmwareAnalyticsEventFrameworkParams, UARPAssetID, NSDate, NSObject;
@protocol OS_os_log;

@interface UARPAnalyticsUpdateFirmwareState : NSObject {
    NSDate *_startDate;
    long long _state;
    NSObject<OS_os_log> *_log;
    unsigned long long _stagingDurationSeconds;
    NSDate *_stagingDurationStart;
    unsigned long long _stagingIterations;
    BOOL _stagingUserInitiated;
    NSNumber *_stagingStatus;
    unsigned long long _analyticsApplyDurationSeconds;
    NSDate *_analyticsApplyDurationStart;
    NSNumber *_analyticsApplyUserInitiated;
    NSNumber *_analyticsApplyStatus;
}

@property (readonly) UARPAccessoryID *accessoryID;
@property (readonly) UARPAssetID *assetID;
@property (readonly) unsigned long long age;
@property (readonly) UARPUpdateFirmwareAnalyticsEventFrameworkParams *eventParams;

- (void)setState:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccessoryID:(id)a0 assetID:(id)a1;
- (void)stagingStartedWithUserIntent:(BOOL)a0;
- (void)stagingCompleteWithStatus:(unsigned long long)a0;
- (void)accessoryUnreachable;
- (void)updateStagingDuration;
- (void)stagingInterrupted;

@end
