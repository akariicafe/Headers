@class NSString, HDProfile, NSObject;
@protocol OS_os_log;

@interface HDTTRPromptController : NSObject {
    HDProfile *_profile;
    NSObject<OS_os_log> *_loggingCategory;
    _Atomic BOOL _isPresenting;
}

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) double minimumPromptInterval;
@property (nonatomic) long long maximumErrorCount;
@property (nonatomic) BOOL canRepromptOnSameBuild;
@property (copy, nonatomic) NSString *notificationTitle;
@property (copy, nonatomic) NSString *notificationMessage;
@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSString *radarDescription;
@property (copy, nonatomic) id /* block */ unitTest_willPresentTTRAlertHandler;

+ (id)formattedPersistedValuesForDomainName:(id)a0 database:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProfile:(id)a0 domainName:(id)a1 loggingCategory:(id)a2;
- (void)promptIfRequiredForReason:(id)a0 success:(BOOL)a1 error:(id)a2;
- (BOOL)unitTest_setLastPromptDate:(id)a0 error:(id *)a1;
- (BOOL)unitTest_setLastPromptBuild:(id)a0 error:(id *)a1;

@end
