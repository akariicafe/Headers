@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (BOOL)isColorDisplayOnly;
- (id)calendarIdentifier;
- (id)sharees;
- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (id)UUID;
- (int)displayOrder;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)frozenReminderSource;
- (id)sharedOwnerName;
- (id)remObjectID;
- (id)_account;
- (id)uniqueIdentifier;
- (BOOL)isPublished;
- (int)flags;
- (id)publishURL;
- (int)allowedEntities;
- (id)externalID;
- (id)colorStringRaw;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (id)source;
- (id)REMColorFromEKHexColorString:(id)a0;
- (id)_list;
- (id)symbolicColorName;
- (id)initNewListInStore:(id)a0;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;
- (unsigned long long)sharingStatus;
- (id)title;
- (id)hexColorStringFromREMColor:(id)a0;

@end
