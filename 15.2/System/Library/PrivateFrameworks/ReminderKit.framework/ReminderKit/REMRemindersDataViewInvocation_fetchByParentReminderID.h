@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) BOOL includeUnsupported;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithParentReminderID:(id)a0 includeUnsupported:(BOOL)a1;

@end
