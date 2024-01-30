@interface ASProtocol12_1 : ASProtocol2_5

- (id)protocolVersion;
- (BOOL)allowsReminderOnCompletedTasks;
- (BOOL)requiresExplicitlyFalseGetChanges;
- (BOOL)sendAttendeeRole;
- (BOOL)serverCreatesEventChangesForInvitations;
- (BOOL)shouldSendClassForFolderItemsSync;
- (BOOL)shouldSendFullContactInfo;
- (BOOL)shouldUseWBXMLProvisioning;
- (BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
- (BOOL)usesAirSyncBaseNamespace;

@end
