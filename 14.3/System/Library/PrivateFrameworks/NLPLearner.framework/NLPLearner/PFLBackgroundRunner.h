@class _DASActivity, NSString, BKSProcessAssertion, QuickTypePFLBackgroundTask;

@interface PFLBackgroundRunner : NSObject <_DASExtensionRunner>

@property (retain, nonatomic) QuickTypePFLBackgroundTask *task;
@property (retain, nonatomic) BKSProcessAssertion *assertion;
@property (readonly, nonatomic) _DASActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)stop;
- (BOOL)prepareForActivity:(id)a0;
- (unsigned char)start;

@end
