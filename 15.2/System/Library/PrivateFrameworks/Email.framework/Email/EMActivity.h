@class NSError, NSString, NSDate, EMStatusUpdateProvider, NSDictionary, NSObject, NSProgress, EMActivityObjectID;
@protocol OS_os_log, EFCancelable;

@interface EMActivity : NSObject <EFLoggable, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    EMStatusUpdateProvider *_statusUpdateProvider;
    id<EFCancelable> _progressKVOCancellation;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) double fractionCompleted;
@property (readonly) EMActivityObjectID *objectID;
@property (readonly) BOOL needsPersistentHistory;
@property (readonly) long long activityType;
@property (readonly) NSDate *started;
@property (readonly) NSDate *finished;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingLocalizedDescription;

- (void)finishWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_observeProgress;
- (id)_localizedDescriptionForFetchState:(long long)a0;
- (id)initWithActivityType:(long long)a0 userInfo:(id)a1;
- (BOOL)isEqualToActivityWithType:(long long)a0 userInfo:(id)a1;
- (void)setCompletedCount:(long long)a0 totalCount:(long long)a1;

@end
