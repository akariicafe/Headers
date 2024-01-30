@class NSArray, NSString, NSDate, REMObjectID;

@interface REMAssignment : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (class, readonly, nonatomic) BOOL rem_DA_supportsFetching;
@property (class, readonly, nonatomic) BOOL rem_DA_supportsLazyDelete;
@property (class, readonly, nonatomic) NSArray *rem_DA_lazyDeleteProperties;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDsBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromTombstoneBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *assignedDate;
@property (nonatomic) BOOL _debug_cdAssigneeLinked;
@property (nonatomic) BOOL _debug_cdOriginatorLinked;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) REMObjectID *assigneeID;
@property (readonly, nonatomic) REMObjectID *originatorID;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *reminderID;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)nullifiedOriginatorAssignmentWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 assigneeID:(id)a3 status:(long long)a4 assignedDate:(id)a5;
+ (BOOL)isChangeTrackableFetchableModel;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (BOOL)isChangeTrackableModel;
+ (double)orderValueWithAssignedDate:(id)a0 objectIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 assigneeID:(id)a3 originatorID:(id)a4 status:(long long)a5 assignedDate:(id)a6;
- (BOOL)isEqualToAssignment:(id)a0;
- (BOOL)isOriginatorNullified;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 assigneeID:(id)a3 originatorID:(id)a4 status:(long long)a5;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)orderValue;

@end
