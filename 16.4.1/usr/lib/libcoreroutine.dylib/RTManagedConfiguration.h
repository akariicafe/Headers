@protocol RTManagedConfigurationObserver;

@interface RTManagedConfiguration : NSObject

@property (weak, nonatomic) id<RTManagedConfigurationObserver> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)isHealthDataSubmissionAllowed;
- (BOOL)isFindMyCarAllowed;
- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (void).cxx_destruct;

@end
