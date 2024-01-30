@class NSString, NSArray;

@interface OSLogEntrySignpost : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload>

@property (readonly, nonatomic) unsigned long long signpostIdentifier;
@property (readonly, nonatomic) NSString *signpostName;
@property (readonly, nonatomic) long long signpostType;
@property (readonly, nonatomic) unsigned long long activityIdentifier;
@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) unsigned long long threadIdentifier;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSString *subsystem;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventProxy:(id)a0;
- (void).cxx_destruct;

@end
