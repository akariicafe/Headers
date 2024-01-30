@class NSString, NSArray, UIContextMenuInteraction, CNContactOrbActionsController, UIMenu;

@interface EKUIInviteeContextMenuData : NSObject <CNContactOrbActionsControllerDelegate> {
    NSArray *_calendarMenuStartItems;
    NSArray *_calendarMenuEndItems;
    UIContextMenuInteraction *_interaction;
    CNContactOrbActionsController *_contactActionsController;
}

@property (retain, nonatomic) UIMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactOrbActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (void).cxx_destruct;
- (id)_buildCombinedCalendarAndContactsMenu;
- (id)_contactsMenu;
- (void)_setupCalendarMenuForSection:(id)a0 indexPath:(id)a1 participant:(id)a2 participantSetRole:(id /* block */)a3;
- (void)_setupContactsOrbActionControllerForParticipant:(id)a0;
- (id)initWithDefaultActionsForSection:(id)a0 indexPath:(id)a1 participant:(id)a2 interaction:(id)a3 participantSetRole:(id /* block */)a4;

@end
