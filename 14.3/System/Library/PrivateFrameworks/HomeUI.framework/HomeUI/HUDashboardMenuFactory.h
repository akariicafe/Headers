@interface HUDashboardMenuFactory : NSObject

+ (id)createAddMenuForHome:(id)a0 delegate:(id)a1;
+ (id)createHomeMenuForHomes:(id)a0 currentlySelectedHome:(id)a1 currentLocationHome:(id)a2 delegate:(id)a3;
+ (id)createRoomMenuForHome:(id)a0 currentRoom:(id)a1 delegate:(id)a2;
+ (id)createSettingsMenuForHome:(id)a0 room:(id)a1 incomingInvitationsCount:(unsigned long long)a2 allowEditing:(BOOL)a3 delegate:(id)a4;
+ (id)_roomActionWithRoom:(id)a0 selected:(BOOL)a1 delegate:(id)a2;
+ (id)_homeActionWithHome:(id)a0 selected:(BOOL)a1 currentLocation:(BOOL)a2 delegate:(id)a3;
+ (id)_homeSettingsAction:(id)a0 incomingInvitationsCount:(unsigned long long)a1 delegate:(id)a2;
+ (id)_roomSettingsAction:(id)a0 delegate:(id)a1;
+ (id)_editScreenAction:(id)a0;
+ (id)_addAccessoryAction:(id)a0 delegate:(id)a1;
+ (id)_addSceneAction:(id)a0 delegate:(id)a1;
+ (id /* block */)_actionHandlerForDelegate:(id)a0 block:(id /* block */)a1;

@end
