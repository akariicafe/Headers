@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)_list;
- (id)symbolicColorName;
- (id)sharees;
- (id)remObjectID;
- (int)allowedEntities;
- (id)hexColorStringFromREMColor:(id)a0;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)REMColorFromEKHexColorString:(id)a0;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (id)initNewListInStore:(id)a0;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)source;
- (id)UUID;
- (id)title;
- (id)colorStringRaw;
- (int)displayOrder;
- (id)uniqueIdentifier;
- (int)flags;
- (id)unlocalizedTitle;
- (void).cxx_destruct;
- (BOOL)isColorDisplayOnly;
- (id)_account;
- (id)sharedOwnerName;
- (BOOL)isPublished;
- (id)externalID;
- (id)publishURL;
- (id)allAlarms;
- (unsigned long long)sharingStatus;
- (id)calendarIdentifier;

@end
