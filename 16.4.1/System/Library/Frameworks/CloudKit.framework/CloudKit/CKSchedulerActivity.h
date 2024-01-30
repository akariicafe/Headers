@class CKContainerID, NSString, NSArray, NSDate, CKContainer, NSDictionary, NSObject, CKXPCActivity;
@protocol OS_xpc_object;

@interface CKSchedulerActivity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CKContainerID *containerID;
@property (nonatomic) long long priority;
@property BOOL userRequestedBackupTask;
@property BOOL shouldDefer;
@property (readonly, nonatomic) CKContainer *nullableContainer;
@property (retain) CKContainer *container;
@property (copy) NSDictionary *undeprecatedAdditionalXPCActivityCriteria;
@property (retain) CKXPCActivity *ckXPCActivity;
@property (copy) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (copy) NSArray *relatedApplicationBundleIdentifiers;
@property (copy) NSDictionary *additionalXPCActivityCriteria;
@property unsigned long long expectedTransferSizeBytes;
@property (copy) NSDate *earliestStartDate;

+ (id)defaultRelatedApplicationBundleIdentifiersForContainer:(id)a0;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithIdentifier:(id)a0 containerID:(id)a1 priority:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 container:(id)a1 containerID:(id)a2 priority:(long long)a3;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 container:(id)a1 priority:(long long)a2;

@end
