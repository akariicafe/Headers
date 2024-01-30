@class NSString;

@interface ASProtocolCapabilities : NSObject

@property (retain, nonatomic) NSString *calConstraintsPlistPath;
@property (retain, nonatomic) NSString *abConstraintsPlistPath;

- (void).cxx_destruct;
- (BOOL)supportsMailboxSearch;
- (BOOL)supportsEmailFlagging;
- (BOOL)supportsDraftFolderSync;
- (BOOL)supportsConversations;
- (BOOL)supportsProtocolVersion:(id)a0;
- (id)initWithProtocolVersionString:(id)a0;
- (BOOL)supportsSettingsCommand;
- (BOOL)supportsItemOperationsCommand;
- (BOOL)serverUpdatesAttendeeStatusOnEvents;
- (id)calendarConstraintsPath;
- (id)addressBookConstraintsPath;
- (BOOL)supportsNoteSyncing;
- (BOOL)supportsFreeBusyLookup;
- (id)_calConstraintsPlistPath;
- (id)_abConstraintsPlistPath;

@end
