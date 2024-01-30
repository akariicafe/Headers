@class NSString;

@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *taskIdentifier;

+ (BOOL)cancelAllTasks;
+ (BOOL)taskIsScheduledWithIdentifier:(id)a0;
+ (BOOL)cancelTaskWithIdentifier:(id)a0;
+ (BOOL)scheduleTask:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)activityForScheduling;
- (void)encodeWithCoder:(id)a0;

@end
