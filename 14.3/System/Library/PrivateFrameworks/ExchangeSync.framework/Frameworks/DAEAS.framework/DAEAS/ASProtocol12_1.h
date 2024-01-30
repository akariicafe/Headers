@interface ASProtocol12_1 : ASProtocol2_5

- (id)protocolVersion;
- (BOOL)shouldUseWBXMLProvisioning;
- (BOOL)usesAirSyncBaseNamespace;
- (BOOL)sendAttendeeRole;
- (BOOL)shouldSendClassForFolderItemsSync;
- (BOOL)shouldSendFullContactInfo;
- (BOOL)requiresExplicitlyFalseGetChanges;
- (BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
- (BOOL)serverCreatesEventChangesForInvitations;
- (BOOL)allowsReminderOnCompletedTasks;

@end
