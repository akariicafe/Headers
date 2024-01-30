@class _PASLock;

@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)reminderOverrides;
- (void)updateFactors;
- (id)baseModelName;
- (BOOL)confirmationOptional;
- (BOOL)triggerOptional;
- (BOOL)actionVerbOptional;
- (id)messagesBannerLimit;
- (id)reminderEnrichments;
- (id)reminderInputMapping;
- (id)reminderOutputMapping;

@end
