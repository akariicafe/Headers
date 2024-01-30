@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchReminderIDsByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) BOOL includeIncomplete;
@property (readonly, nonatomic) BOOL includeCompleted;
@property (readonly, nonatomic) BOOL isUnsupported;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithParentReminderID:(id)a0 includeIncomplete:(BOOL)a1 includeCompleted:(BOOL)a2 isUnsupported:(BOOL)a3;

@end
