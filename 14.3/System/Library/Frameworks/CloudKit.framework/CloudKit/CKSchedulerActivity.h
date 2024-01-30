@class NSString, CKContainerID, NSDictionary, NSDate, NSObject, CKContainer;
@protocol OS_xpc_object;

@interface CKSchedulerActivity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CKContainer *container;
@property (copy, nonatomic) CKContainerID *containerID;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL userRequestedBackupTask;
@property (nonatomic) BOOL shouldDefer;
@property (readonly, nonatomic) CKContainer *nullableContainer;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;
@property (copy, nonatomic) NSDictionary *additionalXPCActivityCriteria;
@property (nonatomic) unsigned long long expectedTransferSizeBytes;
@property (copy, nonatomic) NSDate *earliestStartDate;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithIdentifier:(id)a0 container:(id)a1 priority:(long long)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 container:(id)a1 containerID:(id)a2 priority:(long long)a3;
- (id)description;
- (id)initWithIdentifier:(id)a0 containerID:(id)a1 priority:(long long)a2;

@end
