@class NSDateFormatter, ATXModeDuetHelper, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXModeLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_formatter;
    NSUserDefaults *_defaults;
    ATXModeDuetHelper *_duetHelper;
}

@property BOOL shareDiagnosticDataWrapper;

- (id)initWithDuetHelper:(id)a0;
- (id)_userID;
- (id)_userDefaults;
- (void).cxx_destruct;
- (id)stringForDate:(id)a0;
- (id)_lastSubmissionDate;
- (void)_updateLastSubmissionDate:(id)a0;
- (void)logEventsFromModeStream;

@end
