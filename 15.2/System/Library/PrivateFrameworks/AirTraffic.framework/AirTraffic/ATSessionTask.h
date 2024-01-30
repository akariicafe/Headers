@class ATSession, NSString, NSArray, NSError, NSDictionary, NSNumber;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (weak, nonatomic) ATSession *session;
@property (copy, nonatomic) NSString *sessionTaskIdentifier;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *sessionGroupingKey;
@property (copy, nonatomic) NSString *dataClass;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long totalItemCount;
@property (nonatomic) unsigned long long completedItemCount;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSArray *currentItemDescriptions;
@property (copy, nonatomic) NSArray *currentItems;
@property (copy, nonatomic) NSArray *recentlyFailedAssets;
@property (copy, nonatomic) NSDictionary *properties;
@property (copy, nonatomic) NSNumber *totalBytesToTransfer;
@property (copy, nonatomic) NSNumber *totalBytesTransferred;
@property (nonatomic) double startTime;
@property (nonatomic) double finishTime;
@property (readonly, nonatomic) double duration;

- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (id)baseClassRepresentation;
- (id)initWithDataClass:(id)a0;

@end
