@class NSObject, NSString, NSNumber, NSUserDefaults;
@protocol OS_dispatch_source;

@interface ABCPreferences : NSObject {
    BOOL _observedAutoBugCaptureUIPreference;
    BOOL _observingInstalledProfiles;
    NSObject<OS_dispatch_source> *_checkProfilesTimer;
}

@property (nonatomic) BOOL disable_internal_build;
@property (retain, nonatomic) NSNumber *carrier_seed_flag;
@property (retain, nonatomic) NSNumber *seed_flag;
@property (retain, nonatomic) NSNumber *vendor_flag;
@property (retain, nonatomic) NSString *database_container_path;
@property (nonatomic) BOOL optin_autobugcapture;
@property (nonatomic) BOOL disable_autobugcapture;
@property (nonatomic) BOOL dut_flag;
@property (retain, nonatomic) NSNumber *npi_flag;
@property (nonatomic) BOOL is_automated_device_group;
@property (nonatomic) BOOL ignore_automated_device_group;
@property (nonatomic) BOOL abcUIUserConsent;
@property (nonatomic) BOOL ABCUserConsent;
@property (nonatomic) BOOL diagnosticsAndUsageEnabled;
@property (nonatomic) BOOL autoFeedbackAssistantEnable;
@property (nonatomic) BOOL arbitrator_disable_dampening;
@property (nonatomic) BOOL apns_enable;
@property (nonatomic) BOOL apns_dev_environment;
@property (nonatomic) long long arbitrator_daily_count_limit;
@property (nonatomic) unsigned long long max_upload_retries;
@property (nonatomic) unsigned long long arbitrator_dampened_ips_limit;
@property (nonatomic) unsigned long long dampening_restriction_factor;
@property (nonatomic) BOOL disable_api_rate_limit;
@property (nonatomic) double api_rate_limit;
@property (nonatomic) BOOL *enable_cloudkit;
@property (nonatomic) double api_limit_window;
@property (retain, nonatomic) NSUserDefaults *automatedDeviceGroupDefaults;
@property (nonatomic) BOOL cloudkit_enable;
@property (nonatomic) BOOL cloudkit_sandbox_environment;
@property (nonatomic) unsigned long long cloudkit_upload_expiration_timeout;
@property (nonatomic) unsigned long long cloudkit_upload_connection_timeout;
@property (nonatomic) unsigned long long cloudkit_upload_max_fallback_log_count;
@property (retain, nonatomic) NSString *cloudkit_container_identifier;
@property (retain, nonatomic) NSString *cloudkit_inverness_service;
@property (nonatomic) BOOL cloudkit_prefers_anonymous;
@property (nonatomic) unsigned long long case_summary_maximum_per_submission;
@property (nonatomic) unsigned long long case_summary_submitted_retention_days;
@property (nonatomic) unsigned long long case_summary_unsubmitted_retention_days;
@property (nonatomic) BOOL case_summary_enable;

+ (id)initialValuesDictionary;

- (void)processInstalledVisibleProfileIdentifiers:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)setABCUIUserConsent:(BOOL)a0;

@end
