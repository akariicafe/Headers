@class NSUUID, NSString, NSArray, NSDate, HMFLogEventSession, NSObject, NSMutableSet;
@protocol OS_voucher, HMFActivityMarking, OS_os_activity;

@interface HMFActivity : HMFObject <HMFLogging, HMFObject, HMFActivityMarking> {
    NSObject<OS_os_activity> *_internal;
    NSObject<OS_voucher> *_voucher;
    NSMutableSet *_threadContexts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_internalAssertions;
    NSDate *_startDate;
}

@property (class, readonly) HMFActivity *currentActivity;
@property (class, readonly) id<HMFActivityMarking> currentActivityForMarking;

@property (getter=isEventReportingEnabled) BOOL eventReportingEnabled;
@property (readonly) HMFLogEventSession *logSession;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, weak) HMFActivity *parent;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long assertions;
@property (readonly) unsigned long long options;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, getter=hasStarted) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (void)initialize;
+ (id)logCategory;
+ (void)activityWithName:(id)a0 parent:(id)a1 assertions:(unsigned long long)a2 block:(id /* block */)a3;
+ (void)markCurrentActivity;
+ (id)shortDescription;
+ (void)activityWithName:(id)a0 block:(id /* block */)a1;
+ (void)markCurrentActivityWithFormat:(id)a0;
+ (void)activityWithName:(id)a0 parent:(id)a1 block:(id /* block */)a2;
+ (void)activityWithName:(id)a0 parent:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
+ (id)bundleIdentifier;
+ (void)markCurrentActivityWithReason:(id)a0;

- (void)begin;
- (void)end;
- (void)performBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 parent:(id)a1 options:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enableReportingWithServiceName:(id)a0;
- (void)mark;
- (void)markWithReason:(id)a0;
- (id)initWithName:(id)a0 parent:(id)a1;
- (id /* block */)blockWithBlock:(id /* block */)a0;
- (id)logIdentifier;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (void)markWithFormat:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 parent:(id)a2 options:(unsigned long long)a3;
- (void)enableReportingWithServiceName:(id)a0 rootUUID:(id)a1;
- (id)initWithName:(id)a0 parent:(id)a1 assertions:(unsigned long long)a2;
- (id /* block */)blockWithQualityOfService:(long long)a0 block:(id /* block */)a1;

@end
