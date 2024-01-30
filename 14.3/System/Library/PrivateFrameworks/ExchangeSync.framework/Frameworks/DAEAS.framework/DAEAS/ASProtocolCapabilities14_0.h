@interface ASProtocolCapabilities14_0 : ASProtocolCapabilities12_1

- (BOOL)supportsConversations;
- (BOOL)supportsProtocolVersion:(id)a0;
- (BOOL)serverUpdatesAttendeeStatusOnEvents;
- (BOOL)supportsNoteSyncing;
- (BOOL)supportsFreeBusyLookup;
- (id)_calConstraintsPlistPath;

@end
