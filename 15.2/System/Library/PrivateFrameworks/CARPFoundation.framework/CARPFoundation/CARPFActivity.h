@class NSUUID, NSString, NSArray, NSDate, NSMutableSet, CARPFLogEventSession, NSObject;
@protocol CARPFActivityMarking, OS_os_activity, OS_voucher;

@interface CARPFActivity : CARPFObject <CARPFLogging, CARPFObject, CARPFActivityMarking> {
    NSObject<OS_os_activity> *_internal;
    NSObject<OS_voucher> *_voucher;
    NSMutableSet *_threadContexts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_internalAssertions;
    NSDate *_startDate;
}

@property (class, readonly) CARPFActivity *currentActivity;
@property (class, readonly) id<CARPFActivityMarking> currentActivityForMarking;

@property (getter=isEventReportingEnabled) BOOL eventReportingEnabled;
@property (readonly) CARPFLogEventSession *logSession;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, weak) CARPFActivity *parent;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long assertions;
@property (readonly) unsigned long long options;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, getter=hasStarted) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (void)initialize;
+ (void)activityWithName:(id)a0 block:(id /* block */)a1;
+ (void)markCurrentActivityWithReason:(id)a0;
+ (id)logCategory;
+ (void)markCurrentActivityWithFormat:(id)a0;
+ (id)bundleIdentifier;
+ (void)activityWithName:(id)a0 parent:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
+ (void)activityWithName:(id)a0 parent:(id)a1 assertions:(unsigned long long)a2 block:(id /* block */)a3;
+ (void)activityWithName:(id)a0 parent:(id)a1 block:(id /* block */)a2;
+ (void)markCurrentActivity;
+ (id)carpf_shortDescription;

- (id)initWithName:(id)a0 parent:(id)a1;
- (void)performBlock:(id /* block */)a0;
- (void)end;
- (void)mark;
- (id)logIdentifier;
- (void)begin;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id /* block */)blockWithBlock:(id /* block */)a0;
- (void)enableReportingWithServiceName:(id)a0;
- (void)markWithReason:(id)a0;
- (id)initWithName:(id)a0 parent:(id)a1 options:(unsigned long long)a2;
- (void)markWithFormat:(id)a0;
- (void)enableReportingWithServiceName:(id)a0 rootUUID:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 parent:(id)a2 options:(unsigned long long)a3;
- (id)initWithName:(id)a0 parent:(id)a1 assertions:(unsigned long long)a2;
- (id /* block */)blockWithQualityOfService:(long long)a0 block:(id /* block */)a1;

@end
