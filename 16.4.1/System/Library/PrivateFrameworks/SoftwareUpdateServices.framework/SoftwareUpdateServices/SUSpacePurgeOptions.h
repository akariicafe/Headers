@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUSpacePurgeOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) unsigned long long neededBytes;
@property (nonatomic) BOOL enableCacheDelete;
@property (retain, nonatomic) NSString *cacheDeleteVolume;
@property (nonatomic) int cacheDeleteUrgency;
@property (nonatomic) BOOL enableAppOffload;
@property (retain, nonatomic) NSString *appOffloadVolume;
@property (nonatomic) long long appOffloadUrgency;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
