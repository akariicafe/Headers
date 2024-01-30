@class NSString, CalPreferences;

@interface EKCalendarPreferences : NSObject <EKNotificationPreferences> {
    CalPreferences *_preferences;
}

@property (retain) CalPreferences *calPreferences;
@property (nonatomic) BOOL sharedCalendarNotificationsDisabled;
@property (nonatomic) BOOL invitationNotificationsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calendarPreferences;

- (id)disabledCalendarsForDelegateWithUID:(id)a0;
- (unsigned long long)_displayOrderForSourceWithIdentifier:(id)a0 key:(id)a1;
- (unsigned long long)displayOrderForAccountWithSourceIdentifier:(id)a0;
- (BOOL)expandedStateForTopLevelNodeWithUID:(id)a0;
- (void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)a0;
- (void)updateExpandedStateForTopLevelNodeWithUID:(id)a0 state:(BOOL)a1;
- (id)displayOrderForAccounts;
- (BOOL)checkedStateForCalendarWithUID:(id)a0 delegateID:(id)a1;
- (void)updateCheckedStateForCalendarWithUID:(id)a0 delegateID:(id)a1 state:(BOOL)a2;
- (void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)a0;
- (id)init;
- (void)_updateDisplayOrderForSources:(id)a0 key:(id)a1;
- (void)_updateStateForDisabledOrCollapsedItemWithUID:(id)a0 delegateID:(id)a1 state:(BOOL)a2 withKey:(id)a3 withNotification:(id)a4;
- (id)_disabledOrCollapsedItemsForDelegateID:(id)a0 withKey:(id)a1;
- (id)_keyForDelegateID:(id)a0;
- (BOOL)_checkedStateForDisabledOrCollapsedItemWithUID:(id)a0 delegateID:(id)a1 withKey:(id)a2;
- (id)disabledCalendarsForMainWindow;
- (void).cxx_destruct;
- (unsigned long long)displayOrderForLocalGroupWithSourceIdentifier:(id)a0;

@end
