@class NSString;

@interface ASProtocolCapabilities : NSObject

@property (retain, nonatomic) NSString *calConstraintsPlistPath;
@property (retain, nonatomic) NSString *abConstraintsPlistPath;

- (void).cxx_destruct;
- (BOOL)supportsConversations;
- (BOOL)supportsDraftFolderSync;
- (BOOL)supportsEmailFlagging;
- (BOOL)supportsMailboxSearch;
- (id)_abConstraintsPlistPath;
- (id)_calConstraintsPlistPath;
- (id)addressBookConstraintsPath;
- (id)calendarConstraintsPath;
- (id)initWithProtocolVersionString:(id)a0;
- (BOOL)serverUpdatesAttendeeStatusOnEvents;
- (BOOL)supportsEnhancedMailboxSearch;
- (BOOL)supportsFreeBusyLookup;
- (BOOL)supportsItemOperationsCommand;
- (BOOL)supportsNoteSyncing;
- (BOOL)supportsProtocolVersion:(id)a0;
- (BOOL)supportsSettingsCommand;

@end
