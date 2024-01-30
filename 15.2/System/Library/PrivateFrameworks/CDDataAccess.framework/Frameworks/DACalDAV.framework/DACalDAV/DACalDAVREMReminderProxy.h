@class NSString, REMObjectID;

@interface DACalDAVREMReminderProxy : NSObject <DACalDAViCalItemUpdatableBackingModel, DACalDAViCalItemBackingModel>

@property (retain, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReminder:(id)a0;
- (id)updatableBackingModel;
- (void)updatePropertiesWithReminder:(id)a0;

@end
