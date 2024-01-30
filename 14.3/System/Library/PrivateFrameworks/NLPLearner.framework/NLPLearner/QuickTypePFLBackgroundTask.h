@class NSURL;

@interface QuickTypePFLBackgroundTask : MLBackgroundTask

@property (copy, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)activityForScheduling;
- (void)encodeWithCoder:(id)a0;

@end
