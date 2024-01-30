@class NSString, CPLResource;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CPLResource *resource;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic, getter=isHighPriority) BOOL highPriority;
@property (nonatomic) unsigned long long intent;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

+ (id)descriptionForIntent:(unsigned long long)a0;
+ (BOOL)isHighPriorityForIntent:(unsigned long long)a0;
+ (id)intentsToBackgroundDownload;

- (void)launch;
- (void).cxx_destruct;
- (void)setTaskIdentifier:(id)a0;
- (Class)classForKeyedArchiver;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)cancelTask;
- (void)setResource:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResource:(id)a0 taskIdentifier:(id)a1;

@end
