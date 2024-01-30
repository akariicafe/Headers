@class NSMutableDictionary, NSString, NSUUID, NSArray, NSMutableSet, NSObject;
@protocol OS_os_activity, HMFActivityMarking, OS_voucher, HMFLogEventSession;

@interface HMFActivity : HMFObject <HMFLogging, HMFObject, HMFActivityMarking> {
    NSObject<OS_os_activity> *_internal;
    NSObject<OS_voucher> *_voucher;
    NSMutableSet *_threadContexts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_associatedObjects;
    NSArray *_internalAssertions;
    unsigned long long _startMachTime;
}

@property (class, readonly, nonatomic) NSString *currentClientMetricIdentifier;
@property (class, readonly, nonatomic) id<HMFLogEventSession> currentLogSession;
@property (class, readonly) HMFActivity *currentActivity;
@property (class, readonly) id<HMFActivityMarking> currentActivityForMarking;
@property (class, readonly, nonatomic) HMFActivity *_currentActivity;

@property (copy, nonatomic) NSString *clientMetricIdentifier;
@property (readonly, getter=isEventReportingEnabled) BOOL eventReportingEnabled;
@property (readonly, nonatomic) id<HMFLogEventSession> logSession;
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
+ (void)activityWithName:(id)a0 parent:(id)a1 assertions:(unsigned long long)a2 block:(id /* block */)a3;
+ (void)markCurrentActivity;
+ (void)markCurrentActivityWithFormat:(id)a0;
+ (id)shortDescription;
+ (void)activityWithName:(id)a0 parent:(id)a1 block:(id /* block */)a2;
+ (id)bundleIdentifier;
+ (void)markCurrentActivityWithReason:(id)a0;
+ (id)logCategory;
+ (void)activityWithName:(id)a0 block:(id /* block */)a1;
+ (void)activityWithName:(id)a0 parent:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;

- (void)begin;
- (id /* block */)blockWithBlock:(id /* block */)a0;
- (id)logIdentifier;
- (id)initWithName:(id)a0;
- (void)markWithFormat:(id)a0;
- (void)markWithReason:(id)a0;
- (id)_associatedObjectForKey:(id)a0;
- (void)end;
- (id)initWithName:(id)a0 parent:(id)a1;
- (void)performBlock:(id /* block */)a0;
- (void)mark;
- (id /* block */)blockWithQualityOfService:(long long)a0 block:(id /* block */)a1;
- (void)enableReportingWithServiceName:(id)a0;
- (void)enableReportingWithServiceName:(id)a0 uuid:(id)a1;
- (void)dealloc;
- (id)initWithName:(id)a0 parent:(id)a1 options:(unsigned long long)a2;
- (id)initWithName:(id)a0 parent:(id)a1 assertions:(unsigned long long)a2;
- (void)synchronizeWithActivityLock:(id /* block */)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 name:(id)a1 parent:(id)a2 assertions:(id)a3;
- (void)invalidate;
- (void)_setAssociatedObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 parent:(id)a2 options:(unsigned long long)a3;

@end
