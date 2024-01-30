@class NSString;

@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess>

@property (readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property (readonly, nonatomic) unsigned long long activityIdentifier;
@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) unsigned long long threadIdentifier;

- (void).cxx_destruct;
- (id)initWithEventProxy:(id)a0;

@end
