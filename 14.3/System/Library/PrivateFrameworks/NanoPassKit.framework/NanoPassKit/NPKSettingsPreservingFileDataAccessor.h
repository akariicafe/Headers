@class NPKCompanionAgentConnection, NSString;

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor

@property (retain, nonatomic) NPKCompanionAgentConnection *connection;
@property (retain, nonatomic) NSString *objectUniqueID;

- (void).cxx_destruct;
- (void)updateSettings:(unsigned long long)a0;

@end
