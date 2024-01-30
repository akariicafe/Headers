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

- (void).cxx_destruct;
- (id)initWithEventProxy:(id)a0;

@end
