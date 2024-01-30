@class NSURL;

@interface QuickTypePFLBackgroundTask : MLBackgroundTask

@property (copy, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)activityForScheduling;

@end
