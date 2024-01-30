@class NSString, NSObject, NSDate;
@protocol CPLSyncSessionRescheduler, OS_xpc_object;

@interface CPLSyncSession : NSObject

@property (readonly, nonatomic) NSDate *expectedDate;
@property (readonly, nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic, getter=isDetached) BOOL detached;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly, nonatomic) BOOL mightNeedForegroundToStart;
@property (readonly, nonatomic) NSString *whenItWillStartDescription;
@property (retain, nonatomic) id<CPLSyncSessionRescheduler> rescheduler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *detachedActivity;

+ (id)detachedSyncSession;

- (void).cxx_destruct;
- (BOOL)isAfterDate:(id)a0;
- (BOOL)isBeforeDate:(id)a0;
- (id)description;
- (id)initWithSequenceNumber:(unsigned long long)a0 expectedDate:(id)a1;
- (BOOL)isInMoreThanTimeInverval:(double)a0;
- (BOOL)isInLessThanTimeInterval:(double)a0;
- (void)dropExpectedDate;
- (void)deferWithBlock:(id /* block */)a0;
- (void)sessionIsDone;
- (void)sessionWontHappen;
- (void)engineIsClosing;

@end
