@class NSURL, NSString;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging>

@property (readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (BOOL)scheduleTask:(id)a0;
+ (Class)taskRunnerClass;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)activityForScheduling;

@end
