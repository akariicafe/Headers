@class NSString;

@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess>

@property (readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property (readonly, nonatomic) unsigned long long activityIdentifier;
@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) unsigned long long threadIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithEventProxy:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
