@class NSNumber, NSDictionary;

@interface SGReminderTrialClientWrapperGuardedData : NSObject {
    BOOL _confirmationOptional;
    BOOL _triggerOptional;
    BOOL _actionVerbOptional;
    NSNumber *_messagesBannerLimit;
    NSDictionary *_reminderOverrides;
    NSDictionary *_reminderEnrichments;
    NSDictionary *_reminderInputMapping;
    NSDictionary *_reminderOutputMapping;
}

- (void).cxx_destruct;

@end
