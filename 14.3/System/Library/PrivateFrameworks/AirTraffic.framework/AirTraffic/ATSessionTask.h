@class ATSession, NSString, NSArray, NSError, NSDictionary, NSNumber;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isRunning) BOOL running;
@property (getter=isFinished) BOOL finished;
@property (getter=isCancelled) BOOL cancelled;
@property (getter=isSuspended) BOOL suspended;
@property (weak) ATSession *session;
@property (copy) NSString *sessionTaskIdentifier;
@property (copy) NSString *localizedDescription;
@property (copy) NSString *sessionGroupingKey;
@property (copy) NSString *dataClass;
@property double progress;
@property unsigned long long totalItemCount;
@property unsigned long long completedItemCount;
@property (copy) NSError *error;
@property (copy) NSArray *currentItemDescriptions;
@property (copy) NSArray *currentItems;
@property (copy) NSArray *recentlyFailedAssets;
@property (copy) NSDictionary *properties;
@property (copy) NSNumber *totalBytesToTransfer;
@property (copy) NSNumber *totalBytesTransferred;
@property double startTime;
@property double finishTime;
@property (readonly) double duration;

- (void)cancel;
- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)baseClassRepresentation;
- (id)initWithDataClass:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)start;
- (void)encodeWithCoder:(id)a0;

@end
