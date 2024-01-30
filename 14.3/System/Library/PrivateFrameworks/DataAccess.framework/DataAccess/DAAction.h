@interface DAAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long itemChangeType;
@property (retain, nonatomic) id serverId;
@property (retain, nonatomic) id instanceId;
@property (retain, nonatomic, setter=_setChangedItem:) id changedItem;
@property (nonatomic) int changeId;
@property (retain, nonatomic) id forwardedAttendees;
@property (retain, nonatomic) id forwardedAttendeeUUIDs;
@property (nonatomic) BOOL ignoresGuardianRestrictions;

- (void).cxx_destruct;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 serverId:(id)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)message;
- (id)stringForItemChangeType:(unsigned long long)a0;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 serverId:(id)a2 instanceId:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
