@class NSObject;
@protocol OS_os_log, _CDLocalContext;

@interface _DASSystemContext : NSObject

@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSObject<OS_os_log> *dasSystemContextLog;
@property (nonatomic) long long networkPathStatus;
@property (nonatomic) long long inexpensiveNetworkPathStatus;

+ (id)sharedInstance;
+ (id)initWithContext:(id)a0;

- (id)init;
- (BOOL)allowDiscretionaryWorkForUtilityTask:(id)a0 withParameters:(id)a1;
- (void).cxx_destruct;
- (BOOL)isNetworkAvailable;
- (BOOL)allowDiscretionaryWorkForBackgroundTask:(id)a0 withParameters:(id)a1;
- (BOOL)allowsDiscretionaryWorkForTask:(id)a0 withPriority:(unsigned long long)a1 withParameters:(id)a2;
- (BOOL)isApplicationFocalForPushTask:(id)a0;
- (BOOL)isInexpensiveNetworkAvailable;

@end
