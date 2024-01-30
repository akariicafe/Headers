@class NSURL, NSString;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging>

@property (readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)activityForScheduling;
- (void)encodeWithCoder:(id)a0;

@end
