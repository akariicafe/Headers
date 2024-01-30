@class NSUUID;

@interface BRCFSEventsPersistedState : BRCPersistedState <NSCopying>

@property (retain, nonatomic) NSUUID *streamUUID;
@property (nonatomic) unsigned long long latestEventID;
@property (nonatomic) unsigned long long rootID;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLatestEventID:(unsigned long long)a0 streamUUID:(id)a1 rootID:(unsigned long long)a2;

@end
