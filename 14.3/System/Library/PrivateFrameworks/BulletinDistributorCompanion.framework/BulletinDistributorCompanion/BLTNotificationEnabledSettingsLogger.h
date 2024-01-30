@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject {
    double _lastLogTime;
}

@property (retain, nonatomic) BLTSectionInfoList *sectionInfoList;

+ (id)sharedNotificationEnabledSettingsLogger:(id)a0;

- (id)init;
- (void)_log;
- (void).cxx_destruct;
- (void)_performActivity:(id)a0;
- (void)_registerActivity;

@end
