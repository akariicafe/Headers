@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)sharedOwnerName;
- (int)displayOrder;
- (unsigned long long)sharingStatus;
- (id)allAlarms;
- (id)symbolicColorName;
- (id)sharees;
- (id)_account;
- (id)remObjectID;
- (id)colorStringRaw;
- (id)syncError;
- (int)flags;
- (id)UUID;
- (id)unlocalizedTitle;
- (int)allowedEntities;
- (BOOL)isPublished;
- (id)publishURLString;
- (BOOL)isColorDisplayOnly;
- (id)externalID;
- (id)title;
- (id)calendarIdentifier;
- (void).cxx_destruct;
- (id)source;
- (id)uniqueIdentifier;
- (id)_list;
- (id)REMColorFromEKHexColorString:(id)a0;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)hexColorStringFromREMColor:(id)a0;
- (id)initNewListInStore:(id)a0;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;

@end
