@class NSString, CPLResourceTransferTaskOptions, CPLResource;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {
    CPLResourceTransferTaskOptions *_options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CPLResource *resource;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) CPLResourceTransferTaskOptions *options;
@property (nonatomic) unsigned long long intent;

+ (id)descriptionForIntent:(unsigned long long)a0;
+ (BOOL)isHighPriorityForIntent:(unsigned long long)a0;
+ (BOOL)isForegroundOperationForIntent:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void)setTaskIdentifier:(id)a0;
- (id)description;
- (id)initWithResource:(id)a0 taskIdentifier:(id)a1;
- (void)cancelTask;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)launch;
- (unsigned long long)hash;
- (Class)classForKeyedArchiver;

@end
