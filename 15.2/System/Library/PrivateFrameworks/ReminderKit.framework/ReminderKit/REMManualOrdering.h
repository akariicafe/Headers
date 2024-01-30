@class NSString, NSArray, NSDictionary, NSDate, REMObjectID;

@interface REMManualOrdering : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *listID;
@property (retain, nonatomic) NSArray *topLevelReminderIDs;
@property (retain, nonatomic) NSDictionary *subtaskIDsByTopLevelReminderID;
@property (retain, nonatomic) REMObjectID *uncommitedRemindersAccountID;
@property (retain, nonatomic) NSDate *modifiedDate;

+ (id)objectIDWithUUID:(id)a0;
+ (id)cdEntityName;
+ (id)newObjectID;

- (id)remObjectID;
- (id)changedKeys;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 listID:(id)a1 topLevelReminderIDs:(id)a2 subtaskIDsByTopLevelReminderID:(id)a3 uncommitedRemindersAccountID:(id)a4 modifiedDate:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 listID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
